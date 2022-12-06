;test program - frist lisp program nov2022

;definizione di funzione
(defun quadrato (x) (* x x))

;funzione anonima
(lambda (x) (+ x 2))
;((lambda (x) (+ x 2)) 40)  applica lambda a 40

;operatori booleani
(and (< -42 0) (> 42 0))
;relazioni fondamentali:
; (and) -> T
; (or) -> NIL