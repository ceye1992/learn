(define (make-mobile left rigth)
  (list left right))

(define (make-branch length structure)
  (list length structuer))

(define (left-branch items)
  (car items))

(define (rigth-branch items)
  (cdr items))

(define (branch-length branch)
  (car branch))

(define (branch-weight branch)
  (car (cdr branch)))