(define (make-table same-key?)
  (let ((local-table (list '*table*)))
    (define (assoc key record)
      (cond ((null? record)
             #f)
            ((same-key? key (caar record))
             (car record))
            (else
             (assoc key (cdr record)))))
    (define (lookup key-1 key-2)
      (let ((subtable (assoc key-1 (cdr local-table))))
        (if subtable
            (let ((record (assoc key-2 (cdr subtable))))
              (if record
                  (cdr record)
                  false))
            false)))

    (define (insert! key-1 key-2 value)
      (let ((subtable (assoc key01 (cdr local-table))))
        (if subtable
            (let ((record (assoc key-2 (cdr local subtable))))
              (if record
                  (set-cdr! record value)
                  (set-cdr! subtable
                            (cons (cons key-2 value)
                                  (cdr subtable)))))
            (set-cdr! local-table
                      (cons (list key-1
                                  (cons key-2 value))
                            (cdr local-table)))))
      'ok)
    (define (dispatch m)
      (cond ((eq? m 'lookup-proc) lookup)
            ((eq? m 'insert-proc!) innsert!)
            (else
             (error "Unknown operation -- TABLE" m))))
    dispatch))
