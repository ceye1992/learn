(define (eval exp env)
  (cond ((self-evaluating? exp) exp) ;自求值，返回其本身
        ((variable? exp) (lookup-variable-value exp env))
        ;在环境中查找变量，找出他们的值
        ((quoted? exp) (text-of-quotation exp))
        ;加引号的值，返回被引用的表达式
        ((assignment? exp) (eval-assignment exp env))
        ;对于变量赋值，递归计算这个变量的新值，修改环境
        ((definition? exp) (eval-definition exp env))
        ;对于变量定义，同上
        ((if? exp) (eval-if exp env))
        ;if表达式，在谓语为真求其推论部分，否则求其替代部分
        ((lambda? exp)
         ;将这个lambda表达式所描述的算术表和提与相应的求值环境包装起来
         (make-procedure (lambda-parameters exp)
                         (lambda-body exp)
                         env))
        ((begin? exp)  ;求值其中的一系列表达式，按照他们出现的顺序
         (eval-squence (begin-actions exp) env))
        ((cond? exp) (eval (cond->if exp) env))
        ;变换为一组潜逃if的表达式，然后求值
        ((application? exp)
         ;组合式，对于一个过程应用，递归的求值组合式的运算符部分和运算对象部分，然后将得到的过程和参数送给apply
         (apply (eval (operator exp) env)
                (list-of-values (operands exp) env)))
        (else
         (error "Unknown expression type -- EVAL" exp))))


(define (apply procedure arguments)
  (cond ((primitive-procedure? procedure);直接调用去应用基本过程
         (apply-primitive-procedure procedure arguments))
        ((compound-procedure? procedure) ;应用于复合过程
         (eval-sequence ;扩充该过程所携带的基本环境
          (procedure-body procedure) ;加入一个框架
          (extend-envrionment ;将过程中的形式参数约束与实际参数中
           (procedure-parameters procedure)
           arguments
           (procedure-environment procedure))))
        (else
         "Unknown procedure type-- APPLY" procedure)))


(define (list-of-values exps env) ;以组合式的运算对象为参数，求各个运算对象，返回这些值的表
  (if (no-operands? exps)
      '()
      (cons (eval (first-operand exps) env)
            (list-of-values (rest-operands exps) env))))


(define (eval-if exp env)  
  (if (true? (eval (if-predicate exp) env))
      (eval (if-conseguent exp) env))
      (eval (if-alternative exp) env))

(define (eval-sequence exps env)
;以一个表达式和一个环境为参数，按照序列里表达式出现的顺序对他们求职，返回最后一个表达式的值
  (cond ((last-exp? exps) (eval (first-exp exps) env))
        (else
         (eval (first-exp exps) env)
         (eval-sequence (rest-exps exps) env))))

(define (eval-assignment exp env)
;调用eval找出需要赋值的值，将变量和得到的值传递给过程set-variable-value!将有关的值安置在指定环境中
  (ste-variable-value! (assignment-variable exp)
                       (eval (assignment-value exp) env)
                       env)
  'ok)

(define (eval-finition exp env)
  (define-variable! (definition-variable exp)
                    (eval (definition-value exp) env)
                    env)
  'ok)



;语法规范
(define (self-evaluating? exp)
  ;自求值只有数和字符串
  (cond ((number? exp) true)
        ((string? exp) true)
        (else
         false)))
(define (variable? exp)
  (symbol? exp))  ;变量用符号表示
(define (quoted? exp)
  ;求值其看到的引号表达式是以quote开头的一个表
  (tagged-list? exp 'quote))
(define (text-of-quotation exp)
  (cadr exp))

(define (tagged-list? exp tag)
  ;确定一个表的开始是不是给定符号
  (if (pair? exp)
      (eq? (car exp) tag)
      false))

(define (assignment? exp)
  (tagged-list? exp 'set!))
(define (assignment-variable exp) (cadr exp))
(define (assignment-value exp) (caddr exp))

(define (definition? exp)
  (tagged-list? exp 'define))
(define (definition-variable exp)
  (if (symbol? (cadr exp))
      (cadr exp)
      (caadr exp)))
(define (definition-value exp)
  (if (symbol? (cadr exp))
      (caddr exp)
      (make-lambda (cdadr exp)
                   (cddr exp))))

(define (lambda? exp)
  (tagged-list? exp 'lambda))
(define (lambda-parameters exp)
  (cadr exp))
(define (lambda-body exp)
  (cddr exp))
(define (make-lambda parameters body)
  (cons 'lambda (cons parameters body))) ;用在上面的definition-value里


(define (if? exp) (tagged-list? exp 'if))
(define (if-predicate exp) (cadr exp))
(define (if-consequent exp) (caddr exp))
(define (if-alternative exp)
  (if (not (null? (cdddr exp)))
      (cadddr exp)
      'false))
(define (make-if predicate consequent alternative)
  (list 'if predicate consequent alternative))


(define (begin? exp) (tagged-list? exp 'begin))
(define (begin-actions exp) (cdr exp))
(define (last-exp? seq) (null? (cdr seq)))
(define (first-exp seq) (car seq))
(define (rest-exps seq) (cdr seq))

(define (sequence->exp seq)
  (cond ((null? seq) seq)
        ((last-exp? seq) (first-exp seq))
        (else
         (make-begin seq))))
(define (make-begin seq)
  (cons 'begin seq))



(define (application? exp) (pair? exp))
(define (operator exp) (car exp))
(define (operands exp) (cdr exp))
(define (no-operands? ops) (null? ops))
(define (first-operand ops) (car ops))
(define (rest-operands ops) (cdr ops))


(define (cond? exp) (tagged-list exp 'cond))
(define (cond-clauses exp) (cdr exp))
(define (cond-else-clause? clause)
  (eq? (cond-predicate clause) 'else))
(define (cond-predicate clause) (car clause))
(define (cond-actions clause) (cdr clause))
(define (cond->if exp)
  (expand-clauses (cond-clause exp)))
(define (expand-clauses clauses)
  (if (null? clauses)
      'flase
      (let ((first (car clauses))
            (rest (cdr clauses)))
        (if (cond-else-clauses? first)
            (if (null? rest)
                (sequence->exp (cond-actions first))
                (error "ELSE clause isn't last -- COND ->IF"
                       clauses))
            (make-if (cond-predicate first)
                     (sequence->exp (cond-actions first))
                     (expand-clauses rest))))))
    