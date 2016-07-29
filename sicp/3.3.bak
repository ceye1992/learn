(define (make-account balance password)
  (define (withdraw amount)
    (if (>= balance amount)
        (begin (set! balance (- balance amount))
               balance)
        "Insufficient funds"))

  (define (deposit amount)
    (set! balance (+ balance amount))
    balance)
  
  (define (match-password given-password)
    (eq? given-password password))


  (define (dispatch given-password n)
    (if (match-password given-password)
        (cond ((eq? n 'withdraw)
               withdraw)
              ((eq? n 'deposit)
               deposit)
              (else
               (error "Unknow request -- MAKE-ACCOUNT" n)))
        (error "Incorrect password")))
  dispatch)