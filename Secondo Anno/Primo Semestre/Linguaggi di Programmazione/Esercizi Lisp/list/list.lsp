;(defparameter L (cons 1 (cons 2 (cons 3 (cons 4 NIL)))))
(defparameter L (list 1 2 3 4))

(defun list_item (L x)
        (cond ((= x 0) (car L))
              (T (list_item (cdr L) (- x 1)))))

