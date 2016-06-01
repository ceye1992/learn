(define (make-segment n d) (cons n d))

(define (start-segment x) (car x))
(define (end-segment x) (cdr x))

(define (make-point m n) (cons m n))
(define (x-point x) (car x))
(define (y-point y) (cdr y))

(define (midpoint-segment m)
  (let ((start (start-segment m))
        (end (end-segment m)))
    (make-point (average (x-point start)
                         (x-point end))
                (average (y-point start)
                         (y-point end)))))

(define (average x y)
  (/ (+ x y) 2))

(define (print-point p)
  (newline)
  (display "(")
  (display (x-point p))
  (display ",")
  (display (y-point p))
  (display ")"))

