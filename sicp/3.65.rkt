(define (In2-summands n)
  (cons-stream (/ 1.0 n)
               (stream-map - (In2-summands (+ n 1)))))

(define In2-stream
  (partial-sums (In2-summands 1)))