(define (expamd-cond? clause)
  (eq? (cadr (cond-action clause)) '=>))

(define (make-application function parameters)
  (cons function parameters))

(define (extended-cond-action clause)
  (caddr clause))

(define (expand-clause-cond clause)
  (if (null? clause)
      'false
      (let ((first (car clause))
            (rest (cdr clause)))
        (if (cond-else-cond? first)
            (if (null? rest)
                (sequenct->exp (cond-actions first))
                (error "ELSE clause isn't last -- COND->IF" clause))
            (if (extended-cond? first)
                (make-application (make-lambda '(_cond-parameter)
                                               (make-if _cond-parameter
                                                        (make-application (extended-cond-actions first)
                                                                          _cond-parameter)
                                                        (expand-clauses rest)))
                                  (cond-predicate first))
                (make-if (cond-predicate first)
                         (sequence->exp (cond-actions first))
                         (expand-clauses rest)))))))