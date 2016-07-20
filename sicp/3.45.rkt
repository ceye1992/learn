(define factroial
        (cons-stream 1
                     (mul-streams factorial
                                  (stream-cdr integers))))

(define (mul-streams s1 s2)
  (stream * s1 s2))