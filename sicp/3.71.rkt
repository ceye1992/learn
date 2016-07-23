(define (merge-weighted s1 s2 weight)
  (cond ((stream-null? s1) s2)
        ((stream-null? s2) s1)
        (else
         (let ((cars1 (stream-car s1))
               (cars2 (stream-car s2)))
           (cond ((< (weight cars1) (weight cars2))
                  (cons-strams cars1
                               (merg-weight (stream-cdr s1) s2 weight)))
                 ((= (weight cars1) (weight cars2))
                  (cons-streams cars1
                                (merg-weight (stream-cdr s1) (stream-cdr s2) weight)))
                 (else
                  (cons-stream cars2
                               (merg-weight s1 (stream-cdr s2) weight))))))))


(define (weight-pairs s1 s2 weight)
  (cons-stream (list (stream-car s1) (stream-car s2))
               (merge-weight (stream-map (lambda (x) (list (stream s1) x))
                                         (stream-cdr s2))
                             (weight-pairs (stream-cdr s1) (stream-cdr s2) weight)
                             weight)))


(define (cubicSum p)
    (let ((i (car p))
          (j (cadr p)))
      (+ (* i i i) (* j j j))))

(define sortedStream (weight-pairs cubicSum (integers 0) (integers 0)))


(define (remanujan s pre)
  (let ((num (cubicSum (stream-car s))))
    (cond ((= pre num)
           (cons-stream num
                        (remanujan (stream-cdr s) num)))
          (else
           (remanujan (stream-cdr s) num)))))
           