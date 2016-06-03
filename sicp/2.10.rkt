(define (div-interval x y)
  (if (or (< ((* upper-bound x) (lower-bound x))
             0)
          (< ((* upper-bound y) (lower-bound y))
             0))
      (display "The number can't be division")
      (mul--interval x
                     (make-intervale (/ 1.0 (upper-bound y))
                                        (/ 1.0 (lower-bound y))))))
              