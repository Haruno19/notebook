# Sistema Binario: Operazioni Artimtetiche

[Mon, 7 Mar](day://2022.03.07)

> > ## Somma

Come per la *somma aritmetica decimale*, la somma aritmetica *binaria* può occasionalmente *generare* dei **::riporti::** (*carry*), ovvero un *bit* di *valore 1* che si riferisce alla **::cifra di ordine superiore::** a quella dove si è generato.

+ Esempio di addizione

      RIPORTO:             1 1

      PRIMO ADDENDO:     0 0 0 1 0 0

      SECONDO ADDENDO:   1 0 1 1 0 1

      RISULTATO:         1 1 0 0 0 1

> > ## Sottrazione

Come per la *sottrazione aritmetica decimale*, la sottrazione aritmetica *binaria* può occasionalmente *generare* un **::prestitio::** (*borrow*), ovvero sottrarre *un’unità* dalla **::cifra di ordine superiore::** a quella dove si è generato.

Quando si effettua un prestito **::passando da più di una cifra::** *da sinistra verso destra*, tutti gli 0 vengono **::trasformati in 1::**, in quanto il *primo prestito* genera un 10 alla sua destra, e il prestito successivo *sottrae* un 1 da quel 10 (risultando appunto in 1), fino alla cifra che ha *generato* il prestito.

+ Esempio di sottrazione

      PRESTITO:       0 1 1 10

      MINUENDO:     1 1 0 0 0

      SOTTRAENDO:   0 0 1 1 1

      RISULTATO:    1 0 0 0 1

