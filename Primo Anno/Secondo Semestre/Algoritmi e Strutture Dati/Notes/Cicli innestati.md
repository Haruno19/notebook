# Cicli innestati

[Wed, 23 Mar](day://2022.03.23)

> ### Valutazione dei Tempi di Esecuzione di un Algoritmo con Cicli innestati

   + **::Pseudocodice::** dell’algoritmo

      `int f(h)`

      `begin`

         `r = 0`                          c ⋅ 1

         `for i = 1 to n-1`                c ⋅ (n-1)

         `begin`

            `for j = i+1 to n`             c ⋅ ∑(i=1 → n-1) n-1

            `begin`

               `for k = 1 to j`            c ⋅ ∑(i=1 → n-1) (∑(j=i+1 → n) j)

               `begin`

               r++                   c ⋅ ∑(i=1 → n-1) (∑(j=i+1 → n) j)

               `end`

            `end`

         `end`

         `return r`                        c ⋅ 1

      `end`

   + Formula per il calcolo delle **::operazioni::**

      $$Tf (n) = 2c + c(n-1) + c$$ ∑$$(i=1$$ → $$n-1)( n-1) +2c($$∑$$(i=1$$ → $$n-1) ($$∑$$(j=i+1$$ → $$ n) j))$$ ≈ $$2c + cn + c$$∑$$(i=1$$ → $$n-1)(i) + 2c $$∑$$(i=1$$ → $$n-1) ($$∑$$(j=1$$ → $$n)(j) - $$∑$$(j=1 $$→ i$$)(j))$$ ≈ $$2c + cn + (n(n-1))/2 + 2c$$ ∑$$(i=1$$ → $$n-1)((n(n-1))/2 - (i(i+1))/2))$$ ≈ $$2c + cn + cn^2/2 + 2c (1/2) $$∑$$(i=1$$ → $$n-1) (n^2-n-i^2-i)$$ ≈ $$2c + cn + cn^2/2 + c ((n-1)(n^2) - (n)(n-1) + $$∑$$(i=1$$ → $$n-1)(-i^2) -  $$∑$$(i=1$$ → $$ n-1)(i))$$ ≈ $$2c + cn + cn^2/2 + cn^3 - cn^2 - c$$∑$$(i=1$$ → $$n-1)(-i^2) -  $$∑$$(i=1$$ →$$ n-1)(i))$$ ≈ $$2c + cn + cn^2/2 + cn^3 - cn^2 - c ((n-1)(n)(2(n-1)+1))/6 - ((n-1)(n))/2$$ ≈ $$2c + cn  -ac n^2/2 + 5 cn^3/6$$ ≈ ϴ$$(n^3)$$

