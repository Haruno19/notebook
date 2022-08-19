# Ricorsione #1

[Wed, 23 Mar](day://2022.03.23) [Mon, 28 Mar](day://2022.03.28)

La **::ricorsione::** è un metodo di programmazione che si basa sul *principio* dell’**::induzione::**.

Per raggiugnere l’**::obiettivo::** dell’agoritmo, la funzione *richiama* **::se stessa::**.

> ### Valutazione dei Tempi di Esecuzione

   + **Esempio**: *algoritmo per calcolare il fattoriale*

      `fatt(n) = n * fatt(n-1)`

      `int fatt(n)`

         `begin`

         `if(n == 0`                   c

            `return(1)`                c ⋅ $$t_i$$

         `else`

            `return n*fatt(n-1)`        c ⋅ $$f_i$$

         `end`

   Formula per il calcolo delle **::operazioni::**

      $$T(n) = 3c + T(n-1)$$ se $$n > 0$$

         = 2c se n=$$= 2c$$

