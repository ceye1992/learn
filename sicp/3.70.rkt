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

(define weight1 (lambda (x) (+ car x) (cadr x)))
(define pairs1 (weight-pairs integers integers weight1))


(define weight2 (lambda (x) (+ (* 2 (car x)) (* 3 (cadr x)) (* 5 (car x) (cadr x)))))
(define stream235
  (stream-filter (lambda (x) (not (or (divide? 2 x) (divide? 3 x) (divide? 5 x))))
                 integers))
(define pairs2 (weight-pairs stream235 stream235 weight2))