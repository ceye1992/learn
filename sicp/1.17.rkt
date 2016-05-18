#lang racket
(define (multi a b)
  (cond ((= b 0)
         0)
        ((even? b)
         (double (multi a (havle b))))
        (else (+ a (multi a (- b 1))))))
(define (double n)
  (+ n n))
(define (havle n)
  (/ n 2))
(define (even? n)
  (= (remainder n 2) 0))

  