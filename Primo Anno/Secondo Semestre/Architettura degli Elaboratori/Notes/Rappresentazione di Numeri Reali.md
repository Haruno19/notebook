# Rappresentazione di Numeri Reali

[Fri, 11 Mar](day://2022.03.11)

> > ## Rappresentazione in Virgola Fissa

Per rappresentare un **::numero reale::**, avendo a disposizione $$N$$ *bit*, si *divide* la *sequenza* nel seguente modo:

   - $$1$$ bit (il **::MSB::**) per rappresentare il **::segno::**.
   - $$I <(N-1)$$ bit per rappresentare la **::parte intera::**.
   - $$D = N-(I+1)$$ bit per rappresentare la **::parte decimale::**.

La **::posizione::** della **::virgola::** è **::arbitraria::**, e *influenza* la **::capacità::** di *rappresentazione* della *parte intera* (e, di conseguenza anche della *parte decimale*).

Le cifre della *parte decimale* assumono **::potenze negative::** del 2, in modo crescente a partire da $$2^0$$ verso *destra*.

+ Esempio di rappresentazione in virgola fissa [ $$5.25$$ ]

   1 0 1 . 0 1

   $$       $$⋅0.2$$0$$

> > ## Rappresentazione in Virgola Mobile (f*loating point*)

Lo *standard* che definisce le modalità di *rappresentazione* dei numeri in **::virgola mobile::** è IEEE 754 del 1985.

In questa *rappresentazione*, la *posizione* della **::virgola::** *non* è *fissa*, ma è **::variabile::**. 
È una rappresentazione simile alla notazione scinetifica, ad esempio:

   $$546.768$$ viene rappresentato come $$5.46768$$ ⋅ $$10^2$$.

La *sequenza* di bit viene quindi divisa in *tre parti*:

   - **::Segno::** [ $$S$$ ]
   - **::Esponente::** [ $$E$$ ]
   - **::Mantissa::** [ $$M$$ ]

Il numero reale $$X$$ si rappresenta dunque come: $$X = (-1)^s * M * base^E$$.

La precisione della rappresentazione dipende dal numero di bit assegnati alla **::mantissa::**, nonostante comunque una rappresentazione decimale ottenibile da un calcolatore è sempre soggetta ad approssimazione, per cui la sua precisione non è mai infinita.

