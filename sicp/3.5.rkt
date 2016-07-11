(define (estimate-integral p? x1 x2 trials)
  (* 4
     (monte-carlo trials
                  (lambda ()
                    (p? (random-in-range x1 x2)
                        (random-in-range y1 y2))))))

(define (get-pi trials)
  (exact->inexace
   (estimate-integral (lambda (x y)
                        (< (+ (square x)
                              (square y))
                           1.0))
                      -1.0
                      1.0
                      -1.0
                      1.0
                      trials)))

(define (random-in-range low hing)
  (let ((range (- hing low)))
    (+ low
       (random (exact->inexact rannge)))))

(define (monte-carlo trials experiment)
  (define (iter trials-remaining trials-passed)
    (cond ((= trials-remaining 0)
           （/ trials-passed trials)
          ((experiment)
           (iter (- trialse-remaining 1) (+ trials-passed 1)))
          (else
           (iter (- trialse-remaining 1) trials-passed))))
  (iter trials 0))

(define (random-in-rang 