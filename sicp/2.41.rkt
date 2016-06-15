(define (accumulate op initial sequence)
  (if (null? sequence)
      initial
      (op (car sequence)
          (accumulate op initial (cdr sequence)))))

(define (flatmap proc seq)
  (accumulate append nil (map proc seq)))

(define (unique-triples n)
  (flatmap (lambda (i)
             (map (lambda (j)
                    (cons i j))
                  (unique-pairs (- i 1))))
           (enumerate-interval 1 n)))

(define (flatmap proc seq)
  (accumulate append nil (map proc seq)))

(define (enumerate-interval low high)
  (if (> low high)
      nil
      (cons low (enumerate-interval (+ low 1) high))))

(define (unique-pairs n)
  (flatmap (lambda (i)
             (map (lambda (j) (list i j))
              (enumerate-interval 1 (- i 1))))
           (enumerate-interval 1 n)))

(define (triple-sum-equal-to? sum triple)
  (= sum
     (+ (car triple)
        (cadr triple)
        (cadrr triple))))

(define (remove-triples-not-equal-to sum triple)
  (filter (lambda (current-triple)
            (triple-sum-equla-to? sum triple))
          triple))

(define (filter predicate sequence)
  (cond ((null? sequence) nil)
        ((predicate (car sequence))
         (cons (car sequence)
               (filter predicate sequence)))
        (else
         (filter predicate sequence))))