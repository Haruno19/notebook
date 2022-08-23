# Sistemi Numerici

[Mon, 7 Mar](day://2022.03.07)

Il calcolatore utilizza **::sequenze di 0 e 1::** per rappresentare *qualsiasi* tipo di *informazione*.

Per evitare *fraintendimenti* di significato, sono stati definiti degli **::standard di codifica::.**

Il **::bit::** è l’*unità di misura* dell’informazione. Combinando più bit, si ottengono *strutture* più complesse:

   - *::Nybble::*: 4 bit
   - *::Byte::*: 8 bit
   - *::Halfword::*: 16 bit
   - *::Word::*: 32 bit
   - *::Doubleworld::*: 64 bit

Tramite $$k$$ bit è possibile ottenere $$2^k$$ **::combinazioni::** *differenti*.

Il *sistema binario* è detto **::posizionale::**, perchè il *valore* delle cifre cambia in base alla sua *posizione* nella sequenza.

In un byte, il **::primo::** e l’**::ultimo::** bit prendono il nome rispettivamente di **::MSB::** (*Most Significant Bit*) e **::LSB::** (*Least Significant Bit*).

**::MSB::** → **::1::** 0 1 0 1 0 0 **::1::** ← **::LSB::**

Oltre al *sistema binario*, esistono i *sistemi numerici* **::esadecimali::** (*in base 16*) e **::ottali::** (*in base 8*).

È possibile **::convertire::** valori da qualsiasi base ad un’altra.

+ Esempio di conversione

      Conversione di $$120$$$$_D$$ in *ottale*

      - $$120 : 8 = 15  _R0$$
      - $$15 : 8 = 1 _R7$$
      - $$1 : 8 = 0 _R1$$

      $$120_D = 170_O$$

La **::rappresentabilità::** dei valori è legata al *numero di cifre disponibili*.

Quando ho un numero di cifre *minore* rispetto a quello *necessario* per la rappresentazione, si ha un **::overflow::**.

