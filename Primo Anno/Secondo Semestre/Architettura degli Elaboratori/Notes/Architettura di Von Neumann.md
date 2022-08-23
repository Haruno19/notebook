# Architettura di Von Neumann

[Mon, 28 Mar](day://2022.03.28)

Un *elaboratore* di **::Von Neumann::** è principalmente composto da:

   + *CPU*
      + Register File [ **::RF::** ]

         Registri “*General Purpose*”

      - Arithmetic Logic Unit [ **::ALU::** ]
      + Registri speciali

         Registro Istruzione [ **::RI::** ]

         Instruction Pointer [ **::IP::** ] o Program Counter [ **::PC::** ]

   - *Memoria*
   + *BUS*

      Collega CPU e Memoria (e eventuali periferiche)

      - Indirizzo [ **::ADDR::** ]
      - Dati [ **::DATA::** ]
      - Cotrollo [ **::CONTROL::**]

> ### Esecuzione di un’Istruzione

   Il **::ciclo fondamentale::** svolto dalla *CPU* per *eseguire* *un’istruzione* è composto da *tre* principali *fasi*:

      + **::( 1a)::** *Fetch Instruction*

         **::( 1b)::** PC = PC + 4 *(incremento del Program Counter)*

      - **::( 2 )::** *Decode*
      - **::( 3 )::**  *Execute*

   Per riconoscere un’istruzione da qualsiasi altro tipo di dato, questa viene codificata in uno spedicifo modo.

