#lang racket
(define (f n)
  (f-iter 2 1  0 n))
(define (f-iter a b c  counter)
  (if (= counter 0)
      c
      (f-iter (+ a (* 2 b) (* 3 c))
              a
              b
              (- counter 1))))