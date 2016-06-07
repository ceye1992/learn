(define x1 (list 1 3 (list 5 7) 9))

(define (select1 a)
  (car (cdr (car (cdr (cdr a))))))

(define x2 (list (list 7)))

(define (select2 a)
  (car (car a)))

(define x3 (list 1 (list 2 (list 3 (list 4 (list 5 (list 6 7)))))))

(define (select3 a)
  (car (cdr (car (cdr (car (cdr (car (cdr (car (cdr (car (cdr a)))))))))))))