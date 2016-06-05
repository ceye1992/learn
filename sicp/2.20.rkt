(define (select term x)
  (cond ((null? x) nil)
        ((term (car x))
               (cons (car x)
                     (select term (cdr x))))
        (else (select term (cdr x)))))
         
      
(define (same-parity sample . others)
  (select (if (even? sample)
              even?
              odd?)
          (cons sample others)))
  