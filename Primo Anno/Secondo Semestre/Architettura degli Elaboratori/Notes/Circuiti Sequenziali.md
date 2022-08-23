# Circuiti Sequenziali

[Fri, 18 Mar](day://2022.03.18)

I **::circuiti sequenzali::** sono quei circuiti in grado di calcoalre funzioni che dipendono sia da un **::input::** che da uno **::stato::**, ovvero da informazioni *memorizzate* in elementi di memoria *interni*.

# Clock

Il segnale di **::clock::** è fondamentale per le **::reti sequenziali::**.

È definito come un *segnale* a **::onda quadra::** con un periodo *predeterminato* e *costante* ed è caratterizzato da:

   - Periodo (*o ciclo*) di clock [**::T::**]
   + Frequenza [**::F::**]

      Misurata in **::Hertz::**, indica il numero di cicli che avvengono in **::un::** *secondo*. F = 1/T

Esistono *due* famiglie di *circuiti* *digitali* *sequenzali:*

   + **::Sincroni::**

      Necessitano un segnale di *clock* (*Flip-Flop*)

   + **::Asincroni::**

      Non utilizzano un segnale di *clock* (*S-R Latch*)

Un circuito sequenziale è tipicamente costituito da:

   + Elementi di **::memoria::**

      Memorizzano gli stati

   + Reti **::combinatorie::**

      Elaborano gli input

Esistono due **::metodologie::** di lavoro con un *segnale* di *clock*:

   + **::Level-triggered::**

      Le *operazioni* vengono effettuate in base allo **::stato::** del *clock*.

   + **::Edge-triggered::**

      Le *operazioni* vengono effettuate al **::fronte di salita::** (o **::di::** **::discesa::**) del *clock*.

> ### S-R Latch

   L’**::S-R Latch::** è un circuito composto da due porte **::NOR::** *concatenate*.

   Riceve due **::input::**:

      + Set [**::S::**]

         Imposta lo stato a 1

      + Reset [**::R::**]

         Resetta lo stato a 0

   Genera due **::output::**:

      - Il dato memorizzato [**::Q::**]
      - Il complemento del dato memorizzato [**::!Q::**]
   + Tabella di verità

| **S** | **R** | **Old Q** | **Q** | **!Q** |
| ----- | ----- | --------- | ----- | ------ |
| 0     | 0     | 0         | 0     | 1      |
| 0     | 0     | 1         | 1     | 0      |
| 0     | 1     | 1/0       | 0     | 1      |
| 1     | 0     | 1/0       | 1     | 0      |
| 1     | 1     | 1/0       | 0     | 0      |

> ### D Latch

   Il **::D Latch::** è un S-R Latch *sincronizzato* con un **::clock::** (tramite la metodologia **::level-triggered::**), in modo da garantire che il latch cambi *stato* solo in *determinati* *momenti.*

   Tramite un ulteriore **::input D::**, messo in *AND* con il segnale di *clock* due volte di cui una *negato*, si evita di dare in *input* a un S-R Latch lo *stato irregolare* `S=1 R=1`.

   Con `D=1` si indica il **::setting::**, con `D=0` si indica il **::resetting::**. Il valore Q si **::stabilizza::** quando il segnale di clock torna **::basso::**.

   D deve essere un segnale **::stabile::** e **::corretto::** almeno nei momenti in cui il segnale di *clock* rimane *alzato* per evitare **::glitch::**. Per questo motivo è necessario determinare un **::tempo::** di *clock* abbastanza lungo, tenendo in conto i **::ritardi::** presenti in un circuito *reale*.

> ### Flip-Flop di tipo D

   Un **::Flip-Flop::** (*di tipo D*) è composto da due circuiti *D Latch* in *sequenza* tra loro, uno dei quali riceve il *segnale* di *clock*, mentre l’altro lo riceve *negato*. È un tipo di circuito che sfrutta la *metodologia* **::edge-triggered::**.

