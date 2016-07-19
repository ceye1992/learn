(define (stream-map proc . argstream)
  (if (null? (car agrstream))
      '()
      (cons-stream
       (apply proc
              (map (lambda (s)
                     (stream-car s))
                   argstream))
       (apply stream-map
              (cons proc (map (lambda (s)
                                (stream-car s))
                              argstream))))))