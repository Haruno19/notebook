# Registri

[Fri, 18 Mar](day://2022.03.18)

Un **::registro::** è un *dispositivo* all’interno della *CPU* che permette di **::memorizzare::** *diverse quantità* di bit.

Esistono diversi registri con funzioni diversi:

   + Istruction Ragister [**::IR::**]

      Istruzione corrente

   + Program Counter [**::PC::**]

      Conserva in memoria dell’istruzione successiva

   - Accumulator [**::A::**]

Un *registro* è costituito da un **::insieme di flip-flop::**. Nel *MIPS* ogni registro lavora su *1* *word* (*32 bit*).

> ### Register File

   Un **::Register File::** è una struttura ad **::array::** di *registri*, e permette la **::lettura::** da *due* registri e la **::scrittura::** di *un* registro.

   Riceve in *input:*

      - Write data
      - Write register
      - Read register 1
      - Read register 2

   Ha un *segnale di controllo*:

      - Write

   Ha due *output*:

      - Read data 1
      - Read data 2

   > ### Lettura

      Il *Register File* forinsce *sempre* **::due::** **::word::** in *output*, contenenti il *valore* dei due *registri* **::indicizzati::** da **::5 bit::** che riceve in *input*.

   > #### Scrittura

      Un *segnale di controllo* detto **::write::**, messo in **::AND::** con il *clock*, determina se, al fronte di salita/discesa del *clock*, si debba *scrivere* il valore in memoria. È inoltre necessario un terzo input, ovvero la **::posizione del registro::** in cui si intende *scrivere* il valore.

