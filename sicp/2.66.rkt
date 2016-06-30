(define (lookup given-key set-of-records)
  (cond ((null? set-of-records) false)
        ((equal? given-key (key (car set-of-records)))
         (car set-of-records))
        (else (lookup given-key (cdr set-of-records)))))

(define (look-up given-key set-of-records)
  (cond ((null? set-of-records) false)
        ((= given-key (entry set-of-records))
         (entry set-of-records))
        ((< given-key (entry set-of-records))
         (look-up given-key (left-branch set-of-records)))
        ((> given-key (entry set-of-records))
         (look-up given-key (right-branch set-of-records)))))
        