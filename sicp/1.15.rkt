#lang racket
(define (cube x) (* x x x))
(define (p x) (- (* 3 x) (* 4 (cube x))))
(define (size angle)
  (if (not (> (abs angle) 0.1))
      angle
      (p (size (/ size 3.0)))))