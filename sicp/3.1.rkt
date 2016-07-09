(define (make-accumulator number)
  (lambda (add-number)
    (set! number (+ number add-number))
    number))









     