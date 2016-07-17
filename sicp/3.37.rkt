(define (c+ x y)
  (let ((z (make-conector)))
    (adder x y z)
    z))

(define (c* x y)
  (let ((z (make-connector)))
    (multiplier x y z) z))

(define (c/ x y)
  (let ((z (make-connector)))
    (multiplier z x y)
    z))

