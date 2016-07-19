(define (make-account balance)
  (let ((id (generate-accuont-id)))
    (define (withdraw amount)
      (if (>= balance amount)
          (begin (set! balance (- balance amount))
                 balance)
          "insufficient funds"))
    (define (deposit amount)
      (set! balance (+ balance amount))
      balance)
    (let ((balance-serializer (make-serializer)))
      (define (dispatch m)
        (cond ((eq? m 'withdraw)
               withdraw)
              ((eq? m 'deposit)
               deposit)
              ((eq? m 'balance)
               balance)
              ((eq? m 'serializer)
               balance-serializer)
              ((eq? m 'id)
               id)
              (else
               (error "Unknown request -- MAKE-ACCOUNT" m))))
      dispatch)))
(define (counter)
  (let ((i 0))
    (lambda ()
            (set! i (+ i 1))
            i)))
(define generate-account-id (counter))


(define (serialized-exchange acc-1 acc-2)
  ;获取并对比两个账号的id值
  ;然后传给serialize-and-echange
  (if (< (acc-1 'id) (acc-2 'id))
      (serialize-and-exchange acc-1 acc-2)
      (serialize-and-exchange acc-2 acc-2)))

(define (serialize-and-exchange smaller-id-account bigger-id-account)
  ;使用两个let结构
  ;按书讯先后获取两个账号的serialize
  (let ((smaller-serializer (smaller-id-account 'serializer)))
    (let ((bigger-serializer (bigger-id-account 'serializer)))
      ((smaller-serializer (bigger-serializer exchange))
       smaller-id-account
       bigger-id-account))))
      
    

