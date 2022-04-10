# Ricorsione #2

[Wed, 30 Mar](day://2022.03.30)

> > ## Esempio #1

Valutiamo un algoritmo ricorsivo che descriva questa funzione:

$$f = [ f(0) = 2;  f(n+1) = f(n) + 3]$$

La funzione si può riscrivere come:

$$f(n+1) = f(n-k)+(k+1)3$$ e con $$k=n$$  →  $$f(0) + 3(n+1)$$ →  $$2+3(n+1)$$

> ### Valutazione tempi di esecuzione

Formula per il calcolo delle **operazioni**

$$T(0) = 2c$$

$$T(n) = 3c + T(n-1)$$

> > ## Esempio #2

Scriviamo la forma ricorsiva che descrive questa funzione:

$$f = [ f(0) = 0; f(n) = n^2 + 2n]$$

La funzione si può riscrivere come:

$$f(n+1) = f(n+1)^2 + 2(n+1)$$ → $$n^2 + 2n +1 + 2n + 2$$ → $$f(n) + 2n + 3$$

> > ## Esempio #3

Scriviamo un algoritmo ricorsivo che descriva questa funzione:

$$f =$$  $$[ 3f(n-1) + 5 ]$$    $$n$$ dispari

[ $$[ f(n-1) + 7 ]$$    n $$n$$ari

[ $$[ f(1) = 4]$$

[f$$[f(0) = 2 ]$$

+ **Pseudocodice** dell’algoritmo

`int f(int n)`

`begin`

`if n == 0 return 2`

`if n == 1 return 4`

+ `else`

*scelta "stilistica" per chiudere i casi base*

`if n % 2 == 0`

`r = f(n-1) + 7`

`else`

`r = f(n-1) + 5`

`return r`

`end`

> > ## Esempio #4

Scriviamo un algoritmo ricorsivo che stampi il contenuto di un vettore A.

> ### Istanza d’esempio

+ Algoritmo applicato all’array `A[] = C, I, A, O`

C I A O

C I A O

C I A O

C I A O

C I A O

C I A O

+ **Pseudocodice** dell’algoritmo

`void Stampa(A[], i)`

`if i ≤ length(A)`

`print(A[i])`

`Stampa(A, i+1)`

`begin`

`end`

