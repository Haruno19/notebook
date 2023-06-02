# Insertion Sort

[Wed, 16 Mar](day://2022.03.16)

L’algoritmo di **::Insertion Sort::** è un algoritmo di **::ordinamento::**.

> ### Istanza d’esempio

   + *Insertion Sort* applicato ad un *array* di esempio
      - 72                     ← ::29::
      - ::29::, ::72::
      - 29, 72                 ← ::27::
      - 29, ::27::, ::72::
      - ::27::, ::29, 72::
      - 27, 29, 72             ← ::15::
      - 27, 29, ::15::, ::72::
      - 27, ::15::, ::29, 72::
      - ::15::, ::27, 29, 72::
      - 15, 27, 29, 72         ← ::78::
      - 15, 27, 29, 72, ::78::
      - 15, 27, 29, 72, 78     ← ::29::
      - 15, 27, 29, 72, ::29::, ::78::
      - 15, 27, 29, ::29::, ::72, 78::
      - 15, 27, 29, ::29::, ::72, 78::

> ### Valutazione tempi di esecuzione

   + **::Pseudocodice::** dell’algoritmo

      `void InsertionSort(V[])`

      `begin`

         `for j = 2 to n`                            c1 ⋅ (n-1)

         `begin`

            `buff = v[j]`                            c2 ⋅ (n-1)

            `i = j-1`                                c3 ⋅ (n-1)

            `while(app < v[i]) AND (i > 0)`            c4 ⋅ ∑(j=2 → n)($$t_w$$j)

            `begin`

               `v[i+1] = v[i]`                        c5 ⋅ ∑(j=2 → n)($$t_w$$j)

               `i--`                                 c6 ⋅ ∑(j=2 → n)($$t_w$$j)

            `end`

            `v[i+1] = buff`                           c7 ⋅ (n-1)

         `end`

      `end`

   Formula per il calcolo delle **::operazioni::**

      $$Tinss (n) =$$ $$4c$$($$n-1$$)$$ + 3c  $$∑($$j=2$$ → $$n$$)($$t_w$$$$j$$)

   **::Caso migliore::**: ($$t_w$$$$j$$)$$=0$$  ∀$$j$$                [ *Array già ordinato* ]

      $$Tm(n)$$ $$ = 4c$$($$n-1$$)$$ + 3c$$($$0$$) $$ = 4c$$($$n-1$$) ≈ $$n$$

   **::Caso peggiore::**:  ($$t_w$$j)=j-1                      [ *Array ordinato al contrario* ]

      $$Tp(n)$$   $$= 4c$$($$n-1$$)$$ + 3c$$(∑($$j=2$$ → $$n$$)($$j-1$$)

         + =$$= 4c$$n$$n-1$$+$$+3c$$$$[(n-1)(n)]/2$$≈ n$$n^2$$

            ∑($$j=2$$ → $$n$$)($$j-1$$) ≈ ∑($$j=1$$ → $$n-1$$)$$j$$

   **::Tempo medio::**: $$t_wj = (j-1)/2$$           [ S*i ferma circa a metà dei passi* ]

