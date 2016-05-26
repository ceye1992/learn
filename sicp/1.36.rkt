(define tolerance 0.00001)

(define (fixed-point f first-guess)
  (define (close-enough? v1 v2)
    (< (abs (- v1 v2)) tolerance))
  (define (try guess step)
    (let ((next (f guess)))
      (if (close-enough? guess next)
           guess
          (begin
            (report next step)
            (try next (+ 1 step))))))
  (try first-guess 1))

(define (report guess step)
  (display "step: ")
  (display step)
  (display "   ")
  (display "guess: ")
  (display guess)
  (newline))

(define (no-average n)
  (fixed-point (lambda (x) (/ (log 1000) (log x)))
                       n))

(define (use-average n)
  (fixed-point (lambda (x) (* (/ 1 2) (+ (/ (log 1000) (log x)) x)))
               n))

