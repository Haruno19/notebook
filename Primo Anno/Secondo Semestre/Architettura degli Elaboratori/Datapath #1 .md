# Datapath #1

[Mon, 2 May](day://2022.05.02)

![Image](Datapath%20#1%20.assets/Image.bin)

Il **::datapath::** è la *macchina* che esegue le nostre *istruzioni* sull’*hardware*.

È composto da:

   + Memoria
      - Istruzioni
      - (Dati)
   - Registro IP/PC
   - Registro Reg
   + FSM Controllo

      *Finite-State Machine*

Può essere di due tipi:

   + **::Singolo Ciclo::**

      Ogni istruzione viene eseguita entro un ciclo di clock. Ciò significa che con un’eventuale istruzione che necessita di più cicli di clock, si utilizzano cicli di clock più lunghi

   + **::Multi Ciclo::**

      Tra l’inizio dell’istruzione e la fine dell’istruzione possono passare diversi cicli di clock in base all’istruzione.

Per eseguire un’istruzione è necessario eseguire tre step:

   + **::Fetch::**
      - *Legge* l’istruzione dalla memeoria e salva nel registro *Instruction Register*
      - l’*indirizzo* della instruzione da leggere si trova nel *Program Counter*
      - Dopo la lettura viene *incrementato* di **::4::** il *PC* (tramite l’*ALU*)
   + **::Decode::**
      - *Decodifica* i vari *campi* dell’istruzione per decidere come eseguirla
   + **::Execute::**
      - *Esegue* l’istruzione

