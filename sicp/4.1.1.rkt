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


    