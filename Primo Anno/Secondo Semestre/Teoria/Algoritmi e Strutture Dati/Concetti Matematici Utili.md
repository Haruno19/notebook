# Concetti Matematici Utili

[Wed, 16 Mar](day://2022.03.16)

> > ## Limiti Asintotici

> ### Limite Asintotico Superiore

Consideriamo $$f(n)$$ asintoticamente (*definitivamente*) **non negativa**.

Dare un **limite asintotico** *superiore* vuol dire scrivere $$f(n)$$ in termini di $$O(g(n))$$, ovvero trovare un’altra *funzione* per cui da un punto $$n_0$$ in poi $$f(n) < g(n)$$ a meno di una *costante*.

+ Esempio
   - [x] $$3n^2 = O(10n^2)$$

*Vero per qualsiasi* $$n_0$$

- [x] $$3n^2 = O(2n^2)C$$

*Vero da* $$n_0=10$$* e* $$C=100$$** *in poi*

- [x] $$3n^2 = O(n^2)$$

*Vero da* $$n_0 = 10$$* e* $$C=100$$** *in poi*

$$f(n) = O(g(n)$$$$)$$    ∃ $$C>0, n_0$$ ≥ $$0$$ tc

$$0$$ ≤ $$f(n)$$ ≤ $$Cg(n)$$,∀$$n$$ ≥ $$n_0$$

> ### Limite Asintotico Inferiore

Consideriamo $$f(n)$$ asintoticamente (*definitivamente*) **non negativa**.

Dare un **limite sintotico** *inferiore* vuol dire scrivere $$f(n)$$ in termini di Ω$$(g(n))$$, ovvero trovare un’altra *funzione* per cui da un punto $$n_0$$ in poi $$f(n) > g(n)$$ a meno di una *costante*.

> ### Ordini di Grandezza (*dal più grande*)

1. $$n^2$$
2. $$nlog(n)$$
3. $$n$$
4. $$log(n)$$
5. const

