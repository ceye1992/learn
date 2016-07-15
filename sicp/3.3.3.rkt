(define (lookup key table)
  (let ((record (assoc key (cdr table))))
    (if (record)
        (cdr record)
        false)))

(define (assoc key record)
  (cond ((null? record) false)
        ((equal? key (caar record)) (car record))
        (else
         (asoc key (cdr records)))))


(define (insert! key value table)
  (let ((record (assoc key cdr table)))
    (if record
        (set-cdr! record value)
        (set-cdr! table
                  (cons (cons key value) (cdr table)))))
  'ok)


(define (make-table)
  (list '*table*))


(define (lookup key-1 key-2 table)
  (let ((subtable (assoc key1 (cdr table))))
    (if subtable
        (let ((record (assoc key-2 (cdr subtable))))
          (if record
              (cdr record)
              false))
        false)))

(define (insert! key-1 key-2 value table)
  (let ((subtable (assor key-1 (cdr table))))
    (if subtable
        (let ((record (assoc key-2 (cdr table))))
          (if record
              (set-cdr! record value)
              (set-cdr! subtable
                        (cons (cons key-2 value)
                              (cdr subtable)))))
        (set-cdr! table
                  (cons (list key-1
                              (cons key-2 value))
                        (cdr table)))))
  'ok)


(define (make-table)
  (let ((local-table (list '*table*)))
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


(define (operation-table (make-table)))
(define get (operation-table 'lookup-proc))
(define put (operation-table 'insert-proc!))