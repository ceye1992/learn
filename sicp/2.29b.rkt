(define (make-mobile left rigth)
  (list left right))

(define (make-branch length structure)
  (list length structuer))

(define (left-branch items)
  (car items))

(define (rigth-branch items)
  (car (cdr items)))

(define (branch-length branch)
  (car branch))

(define (branch-weight branch)
  (car (cdr branch)))

(define (total-weight items)
  (+ (branch-weigth (left items))
     (branch-weigth (right items))))

(define (branch-weight branch)
  (if (have-another? branch)
      (total-weigtht (branch-structure branch))
      (branch-structure branch)))

(define (have-another? branch)
  (pair? (branch-structure branch)))