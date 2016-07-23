(define zero-crossings
  (stream-map sign-change-detector sense-date (cons-stream 0 sense-date)))