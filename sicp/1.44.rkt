(define dx 0.00001)

(define (smooth f)
  (lambda (x) (/ (+ (f x)
                    (f (+ x dx))
                    (f (- x dx)))
                 3)))

(define (square x)
  (* x x))

(define (test x)
  ((smooth square) x))

(define (repeated f n)
    (if (= n 1)
        f
        (lambda (x)
          (f ((repeated f (- n 1)) x)))))

(define (fuc-smooth f n)
  (if (= n 1)
      f
      (smooth (fuc-smooth f (- n 1)))))

(define (fuc-resmooth f n)
  (let ((resmooth (repeated smoth n)))
    (resmooth f)))
      