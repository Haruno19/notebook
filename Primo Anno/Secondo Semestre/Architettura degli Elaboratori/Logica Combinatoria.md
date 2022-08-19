# Logica Combinatoria

[Fri, 11 Mar](day://2022.03.11)

> > ## Circuiti Logici

I **::circuiti logici::** sono *fisicamente* realizzati come **::circuiti integrati::** su *chip di silicio*, e sono *composti* da **::porte::** (*gates*) e **::fili::** di *silicio*.

Si possono distinguere diversi **::livelli di integrazione::** in base al *numero* di *porte*:

   + *Smal Scale Integrated [SSI]*

      Da 1 a 10 porte.

   + *Medium Scale Integrated [MSI]*

      Da 10 a 100 porte.

   + *Large Scale Integrated [LSI]*

      Da 100 a 100.000 porte.

   + *Very Large Scale Integrated [VLSI]*

      Con più di 100.000 porte.

Nell’**::elettronica digitale::** gli *input* possono assumere *valore* o **::0::** o **::1::**,  proporzionale al **::segnale basso::** o **::segnale alto::** del *voltaggio* che *fisicamente* passa nei circuiti.

Un **::circuito digitale::** si puo dividere in *due* categorie:

   + Circuito **::combinatorio::**

      il cui *stato* dipende unicamente dalla **::funzione logica::** applicata allo **::stato istantaneo::** dei suoi *ingressi*.

   + Circuito **::sequenziale::**

      il cui *stato* non dipedne solo dalla funzione logica applicata agli ingressi ma anche **::sulla base di valori::** pregressi *collocati* in **::memoria::**.

> ### Porte Logiche

   Le **::porte logiche::** sono *componenti* che permettono di svolegere le **::operazioni::** **::logiche primitive::**. Generalmente, le *porte logiche* hanno **::2::** linee **::input::** e **::1::** in **::output::**.

   Possono essere divise in due categorie, in base all’operazione che svolgono:

   + Porte logiche **::fondamentali::**

      AND, OR, NOT

   + Porte logiche **::derivate::**

      NAND, NOR, XOR

> > ## Circuiti Notevoli

[Mon, 14 Mar](day://2022.03.14)

> ### Decoder

   Un **::decoder::** è un componente elettronico con $$n$$ entrare $$ 2^n$$ uscite.

   Il suo scopo è impostare allo *stato alto l’uscita* corrispondente alla **::conversione::** in **::base 10::** della *codifica binaria* in entrata. La sequenza di $$n$$ bit in *input* rappresenta un *intero unsigned.*

> ### Multiplexor

   Un **::multiplexor::** è un componente elettronico, detto anche **::selettore::**, che in base a *determinati* *input* restituisce un *output*. Ha $$2^n$$ entrate principali, $$n$$ entrate di controllo ed $$1$$ uscita.

   L’**::equazione logica::** *associata* al multiplexor è (A ⋅ ¬ S) + (B ⋅ S)

   Con $$n$$ *input*, un multiplexor *necessita* di $$log_2n$$ *selettroi*.

   A B S  x

   0 0 0  0

   0 0 1  0

   0 1 0  0

   0 1 1  1

   1 0 0  1

   1 0 1  0

   1 1 0  1

   1 1 1  1

   A ¬S + B S

   0  1   1 0

   1  1   1 0

> > ## Programmable Logic Array [PLA]

Un *implementazione* *logica* di tipo **::PLA::** è formata da:

   - Un *insieme* di **::input::**.
   - Alcuni *input* **::complementati::**.
   - *Operazioni logiche* a **::due livelli::**.

   # Operazioni Logiche a Due Livelli

Si definisce **::operazione logica a due livelli::** un'operazione logica che combina in modo *sequenziale* l'utilizzo delle due operazioni *logiche*: **::AND::** e **::OR::**.

Si possono utilizzare le *operazioni logiche a due livelli* per ricavare l’**::equazione logica::** da una **::tabella della verità::**:

   1. Si individuano le **::combinazioni::** che *risultano* in $$1$$.
   2. Si esegue l’operazione *logica* **::AND::** tra tali *combinazioni*.
   3. Si esegue l’oeprazione *logica* **::OR::** tra i *risultati* del punto 2.

In questo modo, si applicano *sequenzialmente* le operazioni logiche di **::AND::** e **::OR::**, risultando in un’*equazione* che *descrive* il comportamento di una determinata *tabella della verità*.

> > ## Array di elementi logici

La maggior parte delle *operazioni logiche* vengono effettuate su un *input* composto da **::32 bit::**, da qui nasce la *necessità* di definire degli **::array di elementi logici::**.

Un **::bus::** è una *collezione* *di* *linee* trattate come un *unico segnale*.

