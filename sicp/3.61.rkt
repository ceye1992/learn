(define (reciprocal-series s)
  (cons-stream 1
               (scale-stream (mul-stries (stream-cdr s)
                                         (reciprocal-series s)) -1)))