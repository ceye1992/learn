(define (partial-sums s)
  (cons-stream (stream-car s)
               (add-streams (partial-sum s)
                            (stream-cdr s))))