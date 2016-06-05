(define (square x)
  (* x x))

(define (reverse items)
  (define (reverse-iter items result)
    (if (null? items)
        result
        (reverse-iter (cdr items)
                      (cons (car items) result))))
  (reverse-iter items '()))
        

(define (square-list items)
  (define (iter things answer)
    (if (null? things)
        answer
        (iter (cdr things)
              (cons (square (car things))
                    answer))))
  (iter (reverse items) nil))
