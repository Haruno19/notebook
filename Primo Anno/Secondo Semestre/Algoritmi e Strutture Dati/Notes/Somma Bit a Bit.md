# Somma Bit a Bit

[Wed, 23 Mar](day://2022.03.23)

Supponiamo di avere due **::numeri binari::** memorizzati in due *array* di dimensione **::n::**, l’*LSB* è nella posizione *n* dell’array. Vogliamo fare la **::somma bit a bit::** e inserire il risultato in un *terzo* array di dimenzione *n+1*.

> ### Istanza d’esempio

   + *Somma Bit a Bit* applicata a due *array* di esempio

      ::carry::  1 1 1 0 0 0 0 0 0

      ::A[]::      0 1 1 0 1 0 1 1

      ::B[]::      1 1 1 1 0 1 0 0

      ::C[]::    1 0 1 0 1 1 1 1 1

> ### Valutazione tempi di esecuzione

   + **::Pseudocodice::** dell’algoritmo

      `void Somma(A[n], B[n], C[n+1])`

      `begin`

         `carry = 0`                                 c ⋅ 1

         `for i = n down to 1`

         `begin`

            `c[i+1] = a[i]+b[i]+carry`                c ⋅ n

            `if c[i+1] <= 1`                         c ⋅ n

               `carry = 1`                           c ⋅ $$t_i$$

            `else`

               `c[i+1] = c[i+1]-2`                    c ⋅ $$f_i$$

               `carry = 1`                           c ⋅ $$f_i$$

         `end`

         `c[1] = carry`                              c ⋅ 1

      `end`

   Formula per il calcolo delle **::operazioni::**

      $$Tsbb (n) = 2c + 3cn + ct_i + 2cf_i$$

   **::Caso migliore::**:   ∄$$i$$  $$1$$≤$$i$$≤$$n$$  t.c.  $$A[i] = B[i] = 1$$

      $$Tm(n)$$ $$=$$ $$2c + 3cn + ct_i$$ ≈ Ω$$(n)$$

   **::Caso peggiore::**:  $$A[n] = B[n] = 1 $$  ∀$$i$$  $$1$$≤$$i$$≤$$n$$  $$A[i] $$≠$$ 0 $$ or $$B[i] $$≠$$ 0$$

      $$Tp(n)$$ $$=$$  $$2c + 3cn + 2cf_i$$ ≈ O$$(n)$$

   **::Tempo medio::**: ϴ$$(n)$$

