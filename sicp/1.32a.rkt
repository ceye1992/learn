(define (accumulate combine null-value term a next b)
  (if (> a b)
      null-value
      (combine (term a) (accumulate combine
                                    null-value
                                    term
                                    (next a)
                                    next
                                    b))))

(define (sum term a next b)
  (define (combine x y) (+ x y))
  (accumulate combine
               0
               term
               a
               next
               b))
(define (product null-vall a b n)
  (define (combine x y) (* x y))
  (accumulate combine
              1
              term
              a
              next
              b))

