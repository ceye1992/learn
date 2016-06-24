(define (make-frame origin edge1 edge2)
  (list origin edge1 edge2))

(define (origin-frame f)
  (car f))

(define (edge1 f)
  (cadr f))

(define (edge2 f)
  (caddr f))

