(define (iterative-improve good-enough? improve)
  (lambda (first-guess)
    (define (try guess)
      (let ((next (improve guess)))
        (if (good-enough? guess next)
            next
            (try next))))
    (try first-guess)))


(define (sqrt-iter x)
  (define dx 0.000001)
  (define (good-enough? v1 v2)
    (< (abs (- v1 v2)) dx))
  (define (improve guess)
    (/ (+ guess
          (/ x guess)) 2))
  (interative-improve good-enough? improve))

(define (fixed-point f first-guess)
  (define tolerance 0.00001)
  (define (good-enough? v1 v2)
    (< (abs (- v1 v2)) tolerance))
  (define (improve guess)
    (f guess))
  ((interative-improve good-enough? improve) first-guess))