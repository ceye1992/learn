(define (filtered-accumulate combine null-value term a next b valid?)
    (if (> a b)
        null-value
        (let ((rest-terms (filtered-accumulate combine
                                               null-value
                                               term
                                               (next a)
                                               next
                                               b
                                               valid?)))
            (if (valid? a)
                (combine (term a) rest-terms)
                rest-terms))))

(define (smallest-divisor n)
 (find-divisor n 2))
(define (find-divisor n test-divisor)
 (cond ((> (square test-divisor) n) n)
       ((divides? test-divisor n) test-divisor)
       (else (find-divisor n (+ test-divisor 1)))))
(define (divides? a b)
  (= (remainder b a) 0))
(define (prime? n)
  (= n (smallest-divisor n)))
(define (square x)
  (* x x))

(define (primes-sum a b)
    (filtered-accumulate + 
                         0
                         (lambda (x) x)
                         a
                         (lambda (i) (+ i 1))
                         b
                         prime?))
(define (gcd a b)
  (if (= b 0)
      a
      (gcd b (remainder a b))))
(define (comprime? i n)
  (and (< i n)
       (= i (gcd i n))))
(define (product-of-coprimes n)
    (filtered-accumulate *
                         1
                         (lambda (x) x)
                         1
                         (lambda (i) (+ i 1))
                         n
                         (lambda (x) (coprime? x n))))