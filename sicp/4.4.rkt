(define (eval exp env)
  (cond ((...))
        ((and? exp) (eval (and-if exp) env))
        ((or? exp) (eval (or->if exp) env))
        ((...))))


(define (and? exp) (tagged-list exp 'and))
(define (and-opreands exp) (cdr exp))
(define (and->if exp) (expand-and-operannds (and-operands exp)))
(define (expand-and-operands operands)
  (if ((null? operands)
       'true
       (make-if (car operands)
                (expand-and-operands (cdr operands))
                'false))))



(define (or? exp) (tagged-list exp 'or))
(define (or-operands exp) (cdr exp))
(define (or->if exp) (expand-or-operands (or-operands exp)))
(define (expand-or-operands operands)
  (if (null? operands)
      'flase
      (make-if (car operands)
               'true
               (expand-or-operands (cdr opperands)))))
                        