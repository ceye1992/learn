(define tolerance 0.00001)

(define (fixed-point f first-guess)
  (define (good-enough? v1 v2)
    (< (abs (- v1 v2)) tolerance))
  (define (try guess)
    (let ((next (f guess)))
      (if (good-enough? guess next)
          next
          (try next))))
  (try first-guess))

(define (average-damp f)
  (lambda (x)
    (average (x (f x)))))

(define (repeated f n)
  (if (= n 1)
      f
      (lambda (x)
        (f ((repeated f (- n 1)) x)))))

(define (expt n base)
  (if (= n 0)
      1
      ((repeated (lambda (x) (* base x)) n) 1)))

(define (average-n f n)
  ((repeated average-damp n) f))


(define (n-root n damp-times)
  (lambda (x)
    (fixed-point
     (average-n
      (lambda (y)
        (/ x (expt y (- n 1))))
      damp-yimes)
      1.0)))
             