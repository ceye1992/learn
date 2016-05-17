#lang racket
(define (f row col)
  (cond ((or (= col 1) (= row col)) 1)
        (else (+ (f (- row 1) (- col 1))
                 (f (- row 1) col)))))