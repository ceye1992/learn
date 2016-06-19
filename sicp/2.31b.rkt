(define (tree-map f tree)
  (map (lambda (sub-tree)
         (if (pair? tree)
             (tree-map f sub-tree)
             (f sub-tree)))
       tree))