## Reference
###### 11.10.2023

Una reference è un alias a una zona di memoria (una variabile)

```c++
int target;
int &ref = target;
```
La reference e il target diventano la stessa identica entità, è come avere un altro nome per la stessa variabile  

Una reference **deve** essere inizializzato ad una variabile, è un puntatore costante, dereferenziato automaticamente, *bloccato* a puntare alla variabile a cui viene inizializzato  

Sia puntatori che reference servono per "condividere" dati, ma hanno differenze: un puntatore può non essere inizializzato, può essere assegnato a NULL, e può essere riassegnato nel corso del programma