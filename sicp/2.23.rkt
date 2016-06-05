(define (for-each p list)
  (if (not (null? list))
      (begin
        (p (car list))
        (for-each p (cdr list)))))