;square root - newton algorithm
;
;  sqrt(X) = Y?
;  assumption       quotient         result
;  Y                (X/Y) = Z        ((Z+Y)/2) = Y1
;
;  sqrt(2)
;  assumption       quotient                result
;  1                (2/1) = 2               ((2 + 1)/2) = 1.5
;  1.5              (2/1.5) = 1.33          ((1.33 + 1.5)/2) = 1.4167
;  1.4167           (2/1.4167) = 1.4118     ((1.4118 + 1.4167)/2) = ...
;
;--------------------------------------------------------------------------

;-- math functions
(defun squared (x) (* x x))
(defun absolute (x)
        (cond ((> x 0) x)
              (T (- x))))

;-- recursion base 
; if (|x - y^2| < 0.001) accept y as sqrt(x)
(defun accept (x y)
    (< (absolute(- x (squared y))) 0.001))

;-- find next approx
(defun next_approx (x y)
    (/ (+ y (/ x y)) 2.0))

;-- sqrt recursion
(defun new_sqrt_rec (x y)
        (cond ((accept x y) y)
              (T (new_sqrt_rec x (next_approx x y)))))

;-- sqrt query
(defun new_sqrt (x)
        (new_sqrt_rec x 1.0))