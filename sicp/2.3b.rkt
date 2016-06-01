(define (make-segment n d) (cons n d))
(define (start-segment x) (car x))
(define (end-segment x) (cdr x))

(define (make-point m n) (cons m n))
(define (x-point x) (car x))
(define (y-point y) (cdr y))

(define (area x)
  (* (length-rectangle x)
     (weith-rectangle x)))

(define (prmieter x)
  (* (+ (length-ractangle x) (weith-ractangle x)) 2))

(define (make-rectangle length1 length weith1 weith2)
  (cons (cons length1 length2)
        (cons weith1 weith2)))

(define (length-rectangle x)
  (car (car x)))
(define (weith-rectangle x)
  (cdr (cdr x)))

