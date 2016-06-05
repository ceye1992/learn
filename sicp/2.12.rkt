(define (make-center-percent c w)
  (make-interval (* c (- 1 w))
                 (* c (+ 1 w))))

(define (center i)
  (/ (+ (lower-bound i) (upper-bound i)) 2))

(define (percent i)
  (- (/ (upper-bound i) (center i)) 1))

