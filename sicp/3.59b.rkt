(define sin-series
  (cons-stream 0
               (intergte-steries consine-series)))


(define cosine-series
  (cons-stream 1
               (integrate-series (scale-stream sin-series -1))))
