(define (sub-interval x y)
  (let ((p1 (abs (- (upper-bound x) (lower-bound y))))
        (p2 (abs (- (upper-bound x) (upper-bound y))))
        (p3 (abs (- (lower-pound x) (lower-bound y))))
        (p4 (abs (- (lower-pound x) (upper-bound y)))))
    (make-interval (min p1 p2 p3 p4)
                   (max p1 p2 p3 p4))))

  