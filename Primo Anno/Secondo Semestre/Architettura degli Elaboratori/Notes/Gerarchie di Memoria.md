# Gerarchie di Memoria

[Fri, 27 May](day://2022.05.27)

Per simulare un sistema di memorie con tempi d’acesso ridotti, a basso costo, e una grande capacità, si utilizza una di **::gerarchia di memoria::**, che consiste in un insieme di livelli di memoria (con tecnologie diverse), ciascuno con una diversa velocità d’accesso e dimensione.

Avvicinandosi alla CPU, aumenta anche la **::velocità d’accesso::** della memoria, e diminuisce la sua **::capacità::**.

- La *memoria interna* alla CPU è costituita da **::registri::**, la cui velocità è quasi comparabile a quella del processore, ma con dimensione molto ridotta.
- La *memoria centrale* è caratterizzata da una dimensione di gran lunga maggiore, ma con tempi d’acesso più elevati.
- Tra la CPU e la memoria centrale, attualmente si inseriscono due o tre livelli di **::cache::**, memorie molto veloci e poco capienti.

I dati necessari vengono spostati di livello in livello per far si che la CPU possa accedervi.

È il *sistema operativo* ad occuparsi della transizione dei dati, i *programmi* non sono a conoscenza della *gerarchia di memoria*, ma visualizzano tutti i dati come se fossero sempre in *memoria centrale*.

> ## Principio di Località

   È necessario massimizzare l’efficienza, ovvero fare in modo che la CPU possa accedere il più velocemente possibile al dato utile in un determianto momento. Per raggiungere tale obiettivo, si applica il **::principio di località::**.

   Esistono due principi di località:

      + **::Temporale::**

         Si tende a fare riferimento a un certo date più volte in tempi diversi.

      + **::Spaziale::**

         Si tende a fare riferimento a un certo gruppo di dati vicini a livello spaziale (di indirizzi).

> ## Definizioni di base

   + **::Blocco::** (linea)

      Zona di memoria centrale

   + **::Hit::**

      Accesso di memoria avvenuto con successo nel livello interessato.

   + **::Miss::**

      Accesso al livello di memoria non avvenuto con successo (un dato non è presente in un determinato livello interessato, ma si trova in uno più basso)

   + **::Hit rate::**

      Frequenza di *Hit*, numero di *Hit* rapportato al *numero di accessi*

   + **::Mss rate::**

      Frequenza di *Miss*, numero di *Miss* rapportato al *numero di accessi*

   + **::Hit time::**

      Tempo impiegato per accedere al livello di memoria

   + **::Miss time::**

      Tempo necessario per sostituire un *blocco* del livello superiore con uno del livello inferiore della gerarchia, e trasferire tale blocco al processore.

