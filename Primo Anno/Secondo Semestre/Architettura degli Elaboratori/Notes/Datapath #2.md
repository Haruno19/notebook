# Datapath #2

[Fri, 6 May](day://2022.05.06)

> > ## Segnali di controllo

   Nel *datapath* *multiciclo* esistono due **::unità di controllo::**:

      - *ALU Control*
      - *Control principale*

   > ### ALU Control

      ALU Control ha due **::input::**:

         - **::6 LSB::** dell’istruzione
         + **::ALUOp::**

            due bit di cui si utilizzano tre configurazioni:

| 00 | add        |
| -- | ---------- |
| 01 | subtract   |
| 10 | func field |

            Le prime due configurazioni servono per utilizzi particolari dell’ALU, ad esempio il +4.

      Il suo **::output::** controlla l’*operazione* che sarà svolta dall’ALU.

   > ### Control principale

      L’unità di controllo principale presenta in uscita:

         + Segnali ad **::un bit::**

            segnali di abilitazione, segnali di controllo multiplexor…

         + Segnali ad **::due bit::**
            - **::ALUOp::**
            + **::ALUSrcB::**

| 00 | B register                                 |
| -- | ------------------------------------------ |
| 01 | 4                                          |
| 10 | lower 16 bits of IR                        |
| 11 | lower 16 bits of IR left shifted by 2 bits |

            + **::PCSource::**

| 00 | output of the ALU (PC + 4) |
| -- | -------------------------- |
| 01 | ALUOut                     |
| 10 | JUMP target                |

