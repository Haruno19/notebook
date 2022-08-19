# Selection Sort

[Wed, 16 Mar](day://2022.03.16)

L’algoritmo di **::Selection Sort::** è un algoritmo di **::ordinamento::**.

> ### Istanza d’esempio

   + *Selection Sort* applicato ad un *array* di esempio
      - 72, 29, 27, ::15::, 78, 29
      - ::15::, 29, ::27::, 72, 78, 29
      - ::15, 27::**,** ::29::, 72, 78, 29
      - ::15, 27, 29::, 72, 78, ::29::
      - ::15, 27, 29, 29::, 78, ::72::
      - ::15, 27, 29, 29, 72::, ::78::

> ### Valutazione tempi di esecuzione

   + **::Pseudocodice::** dell’algoritmo

      `void SelSort(V[])`

      `begin`

         `for i = 1 to n-1`                             c1 ⋅ (n-1)

         `begin`

            `posmin = i`                                c2 ⋅ (n-1)

            `for j = i+1 to n`                           c3 ⋅ (∑(i=0)(n-i))

            `begin`

               `if(v[j] < v[posmin]`                     c4 ⋅ (∑(i=0 → n-i))

               pos`min = j`                          c5 ⋅ (t_i$$t_i$$

            `end`

            `buff = v[i]`                                c6 ⋅ (n-1)

            `v[i] =v[posmin]`                            c7 ⋅ (n-1)

            `v[posmin] = buff`                           c8 ⋅ (n-1)

         `end`

      `end`

   Formula per il calcolo delle **::operazioni::**

      $$T sel s (n)$$  $$ = $$($$n-1$$)($$c1 + c2 + c6 + c7 + c8$$)$$ + $$(∑($$i=0$$ → $$n-i$$))($$c3+c4$$)$$ + c5$$($$t_i$$)

            + $$= $$($$n-1$$)($$c1 + c2 + c6 + c7 + c8$$)$$ + $$[$$n$$($$n-1$$)$$/2$$]($$c3+c4$$)$$ + c5$$($$t_i$$)

               La sommatoria ∑(i$$i=0$$n$$n-i$$ si può scrivere come: [u*ltimo_valore +* (u*ltimo_valore + 1)*] / 2

            = 5$$= $$$$5c$$1$$n-1$$ $$ + $$$$2c$$n$$n$$1$$n-1$$]$$/2$$ $$ + c5$$i$$t_i$$

   **::Caso migliore::**: $$t_i = 0$$                                          [ *Array già ordinato* ]

      $$Tm$$$$(n) = 5c(n-1) +  2c(n^2/2) - 2c(n/2) + 0$$  ≈  $$n^2$$

   **::Caso peggiore::**:  $$t_i = $$  ∑($$i=0$$)($$n-1$$)$$ i $$            [ *Array ordinato al contrario* ]

      $$Tp$$$$(n) = 5c(n-1) +  3c(n^2/2) - 2c(n/2) + 0$$  ≈  $$n^2$$

