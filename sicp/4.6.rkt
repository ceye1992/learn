(define (let exp) (tagged-list? exp 'let))
(define (let-vars exp) (map (car (cadr exp))))
(define (let-inits exp) (map (cadr (cadr exp))))
(define (let-body exp) (cddr exp))


(define (let->combinations exp)
  (list (make-lambda (let-vars exp) (let-body exp))
        (let-inits exp)))

;in eval, adds
((let? exp) (evlan (let->combination exp) env))

