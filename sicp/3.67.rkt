(define (all-pairs s t)
  (cons-stream
   (liet (stream-car s) (stream t))
   (interleave
    (interleave (stream-map (lambda (x) (list (stream-car s) x))
                            (stream-cdr t))
                (all-pairs (stream-cdr s) (stream-cdr t)))
    (stream-map (lambda (x) (list x (stream-car t)))
                (stream-cdr s)))))

(define (interleave s1 s2)
  (if (stream-null? s1)
      s2
      (con-stream (stream-car s1)
                  (interleave s2 (stream-cdr s1)))))