(define (cube x)
  (* x x x))

(define (cubic a b c )
  (lambda (x) (+ (cube x)
                (* a (* x x))
                (* b x)
                c)))

(define (deriv g)
  (lambda (x)
         (/ (- (g (+ x dx)) (g x))
         dx)))

(define dx 0.00001)

(define (fixed-point f first-guess)
  (define (close-enough? v1 v2)
    (< (abs (- v1 v2)) dx))
  (define (try guess)
    (let ((next (f guess)))
      (if (close-enough? guess next)
          next
          (try next))))
  (try first-guess))

(define (newton-transform g)
  (lambda (x)
    (- x (/ (g x) ((deriv g) x)))))

(define (newton-method g x)
  (fixed-point (newton-transform g) x))