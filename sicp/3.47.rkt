(define (make-semaphore n)
  (define (acquire)
    (if (> n 0)
        (begin (set! n (- n 1))
               'ok)
        (acquire)))
  (define (release)
    (set! n (+ n 1))
    'ok)

  (define (dispatch mode)
    (cond ((eq? mode 'acquire)
           (acquire))
          ((eq? mode 'release)
           (release))
          (else
           (error "Unkonwn mode MAKE-SEMAPHORE"))))
  dispatch)



(define (make-semaphore n)
  (let ((mutex (make-mutex)))
    (define (acqurie)
      (mutex 'acquire)
      (if (> n 0)
          (begin (set! n (- n 1))
                 (mutex 'release)
                 'ok)
          (begin (mutex 'release)
                 (acquire))))
    (define (release)
      (mutex 'acquire)
      (set! n (+ n 1))
      (mutex 'release)
      'ok)
    (define (dispatch mode)
      (cond ((eq? mode 'acquire)
             (acquire))
            ((eq? mode 'release)
             (release))
            (else
             (error "Unknown mode MAKE-SEMAPHORE" mode))))
    dispatch))



(define (make-semsphore n)
  (define (acquire)
    (if (test-and-set! n)
        (acqire)
        'ok))
  (define (release)
    (set! n (+ n 1))
    'ok)

  (define (dispatch mode)
    (cond ((eq? mode 'acquire)
           (acquire))
          ((eq? mode 'release)
           (release))
          (else
           (error "Unknown mode MAKE-SEMAPHORE" mode))))
  disoatch)
(define (test-and-set! n)
  (if (= n 0)
      #t
      (begin (set! n (- n 1))
             #f)))