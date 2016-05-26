(define (cont-frac n d k)
  (define (f i)
    (if (= k i)
        (/ (n k) (d k))
        (/ (n i)
           (+ (d i) (f (+ i 1))))))
  (f 1))

(define (e k)
  (define (n i)
    1.0)
  (define (d i)
    (if (= (remainder (+ 1 i) 3) 0)
         (* 2 (/ (+ 1 i) 3))
          1))
  (+ 2.0
     (cont-frac n d k)))

                 
                 