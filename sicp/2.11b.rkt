(define (make-center-percent c w)
  (make-interval (* c (- 1 w)) (* c (+ 1 w))))

(define (center x)
  (/ (+ (lower-bound x) (upper-bound x)) 2))

(define (percent x)
  (/ (- (upper-bound x) (center x)) (center x))) 


        