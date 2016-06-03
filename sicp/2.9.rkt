(define (bound x)
  (- (upper-bound x) (lower-bound y)))

(define (add-interval x y)
  (+ (bound x) (bound y)))

(define (mul-interval x y)
  (* (bound x) (bound y)))
