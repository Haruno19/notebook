(defun factorial (n)
    (cond ((= n 0) 1)
          (T (factorial (- n 1)))))