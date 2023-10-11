## Keywords
###### 11.10.2023

### Tyepdef

La keyword **typedef** ci permette di dire al compilatore di associare un nome (un alias) ad un tipo di dato esistente

```c++
typedef unsiged long int uli;
typedef uli* ptr_uli;
typedef double darr20[20];

uli i;
ptr_uli p = &i;

darr20 d1, d2;
```

### Const
La keyword **const** permette di definire costanti  
È necessario inizializzare le const, e una volta inizializzata non sarà possibile cambiarne il valore

```c++
const int a = 4;
```

Può essere usata su qualsasi tipo di dato, anche puntatori e reference
```c++
int i;
const int &rci = i;
```
In questo caso, `i` è un dato modificabile, mentre `rci` è lo stesso dato ma protetto in scrittura, accessibile solo in lettura  

Ci sono diverse possibilita di combinazione per puntatori e const:
```c++
const int *p; //puntatore variabile a intero costante
//posso modificare il puntatore, ma non il dato puntato

int *const p; //puntatore costante a intero variabile
//posso modificare il dato ma non il puntatore

const int *const p; //puntatore costante a intero costante
//non posso modificare nè il puntatore nè il dato puntato
```
const è utile per aggiungere livelli di protezione ai dati (*contratti d'uso*)