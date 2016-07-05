(define (make-from-mag-ang r a)
  (define (dispatch op)
    (cond ((eq? op 'real-part)
           (* r (cos a)))
          ((eq? op 'imag-part)
           (* r (sin a)))
          ((eq? op 'magnitude)
           x)
          ((eq? op 'angle)
           y)
          (else
           (error "Unkonw op -MAKE_FROM_MAG_ANG" op))))
  dispatch)
           