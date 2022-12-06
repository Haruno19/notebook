; define c as a cons-cell.
; a cons-cell is a data structre available in Lisp,
; it's a pair of pointers to an object.
; (cons obj1 obj2)
(defparameter c (cons 40 2))
; c : [40] [2]

; indivdual objs in a cons-cell can be accesed via two functions
(car c)
; 40 - left obj
(cdr c)
; 2 - right obj

; it's also possible to nest cons-cells
(defparameter n (cons (cons 40 2) 0))
; n :     [ ] [0]
;         / \
;      [40] [2]

(defparameter a (cons (cons (cons 40 2) 1) 0))
; a :        [ ] [0]
;            / \
;         [ ] [1]
;         / \
;      [40] [2]

(defparameter b (cons (cons (cons 40 (cons NIL 2)) 1) 0))
; b :        [ ] [0]
;            / \
;         [ ] [1]
;         / \
;      [40] [ ]
;           / \
;       [NIL] [2]

; since it's possible to nest more cons-cells into other cons-cells
; it's also possibile to create a list
(defparameter L (cons 1 (cons 2 (cons 3 (cons 4 NIL)))))
; L : ( 1 . ( 2 . ( 3 . ( 4 ))))    [NIL at the end of a cons-cell doens't get printed]

; the (list [p]) function is equivalent to a nested cons-cells list
(defparameter L1 (list 1 2 3 4))
