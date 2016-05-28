(define (reperated1 f n)
  (if (= n 1)
      f
      (lambda (x)
        (f ((reperated1 f (- n 1)) x)))))

(define (comprose f g)
  (lambda (x)
    (f (g x))))
  

(define (reperated2 f n)
  (if (= n 1)
      f
      (comprose f
               (reperated2 f (- n 1)))))

(define (square x)
  (* x x))