;absolute value

;                 |  x > 0:  x
;  absolute(x) =  |  x = 0:  0
;                 |  x < 0: -x

(defun absolute (x)
        (cond ((> x 0) x)
              ((= x 0) 0)
              ((< x 0) (- x))))

(defun absolute_2 (x)
        (cond ((> x 0) x)
              (T (- x))))