(define (reverse items)
  (define (reverse-iter items result)
    (if (null? items)
        result
        (reverse-iter (cdr items)
                      (cons (car items) result))))
  (reverse-iter items '()))

(define (deep-reverse items)
  (cond ((null? items)
         '())
        ((not (pair? items))
         items)
        (else
         (reverse (list (deep-reverse(car items))
                        (deep-reverse(cdr items)))))))
           