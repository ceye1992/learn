(define (integreate-series a)
  (mul-streams a
               (div-streams ones integers)))

(define (mul-stream s1 s2)
  (stream-map * s1 s2))

(define (div-stream s1 s2)
  (stream-map / s1 s2))

(define ones
  (cons-stream 1 ones))

(define integers
  (cons-stream 1 (add-streams ones integers)))

  