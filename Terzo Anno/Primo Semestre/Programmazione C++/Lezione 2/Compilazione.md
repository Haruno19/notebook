## Processo di Compilazione
###### 05.10.2023

### Preprocessore
Il preprocessore è il primo step del processo di compilazione, compila le _direttive_ ```[direttive1.cpp e direttive2.cpp]```

- **#define #undef**  
  consente di definire in memoria _macro_ o _tag_  
  il preprocessore esegue un "find and replace" di stringe nel codice
- **#if #ifdef #ifndef** - **#else #elif** - **#endif**  
- **#include**  
  importa in memoria, prima del codice seguente, il codice sorgente nel file indicato

Esistono due tipi di file da includere: **header** (.h) e **file di codice** (.cpp)  
I file header contengono solo le _definizioni_ di variabili o funzione, mentre i file cpp contengono le **implementazioni**. Un file cpp contiene sempre l'inclusione del relative header

Si possono definire "guardie" #ifndef nei file .h per evitare inclusioni multiple ```[direttive3.h]```

### Compilatore
Il compilatore esegue diversi step del processo di compilazione:
- Analisi sintatti del codice
- Analisi semantica  
  - Type Checking
  - Controllo uso delle variabili
  - Identificazione dei simboli (variabili e funzioni)
- Generazione codice
  - Allocazione storage
  - Istruzioni
  - Inclusione informazioni di debug
- Ottimizzazione codice  
  - File oggetto (.obj)

### Linker
- Operazioni
  - Risolve i riferimenti esterni  
    Cerca nei vari file oggetto (file esterni o librerie) l'implementazione dei simboli, e li collega (Link)
  - Assembla i file oggetto  
    Crea eseguibile componendo nel file finale tutto il codice necessario    
    
La libreria standard è automaticamente linkata dal linker
