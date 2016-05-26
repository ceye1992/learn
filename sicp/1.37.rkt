(define (cont-frac n d k)
  (define (f i)
    (if (= k i)
        (/ (n k) (d k))
        (/ (n i)
           (+ (d i) (f (+ i 1))))))
  (f 1))


(define (cont-frac-iter n d k)
  (define (f i result)
    (if (= k i)
        result
        (f (+ i 1)
           (/ (n i)
              (+ (d i) result)))))
  (f 1 (/ (n k) (d k))))

(define (golden k)
  (+ 1
     (cont-frac (lambda (i) 1.0)
               (lambda (i) 1.0)
               k)))
(define (golden-iter k)
  (+ 1
     (cont-frac-iter (lambda (i) 1.0)
                  (lambda (i) 1.0)
                  k)))