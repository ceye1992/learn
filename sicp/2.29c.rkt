(define (make-mobile left rigth)
  (list left right))

(define (make-branch length structure)
  (list length structuer))

(define (left-branch items)
  (car items))

(define (rigtht-branch items)
  (car (cdr items)))`

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

(define (branch-torque branch)
  (* (branch-length branch)
     (branch-weight branch)))

(define (balance? items)
  (let ((left (left-branch items))
        (right (right-branch items)))
    (and (same? left right)
         (branch-balance? left)
         (branch-balance? right))))

(define (same? left right)
  (= (branch-torque left)
     (branch-torque right)))

(define (branch-balance? branch)
  (if (have-another? branch)
      (balance? (branch-struct branch))
      #t))