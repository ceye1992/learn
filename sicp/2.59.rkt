(define (element-of-set? x set)
  (cond ((null? set) false)
        ((equal? x (car set)) true)
        (else
         (element-of-set? x (cdr set)))))

(define (equal? a b)
  (cond ((and (not (pair? a)) (not (pair? b)))
         (eq? a b))
        ((and (pair? a) (pair? b))
         (and (equal? (car a) (car b)) (equal? (cdr a) (cdr b))))
        (else flase)))

(define (adjoin-set x set)
  (if (element-of-set x set)
      set
      (cons x set)))

(define (intersection-set set1 set2)
  (cond ((or (null? set1) (null? set2))
         '())
        ((element-of-set? (car set1) set2)
         (cons (car set1)
               (intersection-set (cdr set1) set2)))
        (eles
         (intersection-set (cdr set1) set2))))

(define (union-set set1 set2)
  (cond ((or (null? set1) (null? set2))
         set2)
        ((element-of-set? (car set1) set2)
               (union-set (cdr set1) set2))
        (else
         (cons (car set1)
               (union-set (cdr set1) set2)))))

(define (union-set set1 set2)
  (iter (append set1 set2) '()))
(define (iter input result)
  (if (null? input)
      result
      (if (element-of-set? (car input) result)
          (iter (cdr input) result)
          (iter (cdr input)
                (cons (car input) result)))))
        
        
        