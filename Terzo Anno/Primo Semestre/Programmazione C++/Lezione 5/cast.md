## Strings
###### 12.10.2023

In C++ esistono diversi modi per fare il **cast** tra tipi

### Cast Implicito

Il compilatore, quando può, risolve l'assegnamento convertendo il tipo
```c++
double d = 4.5;
int i = d; //il compilatore casta troncando il decimale!
```

### Cast Esplicito (Sintassi C)

Viene esplicitata la volontà di effettuare un cast con la seguente sintassi:
```c++
double d = 4.5;
int i = (int)d;
```
Questa sintassi è derivata da C

### Cast Esplicito (Sintassi C++)

Esistono quattro tipi diversi di cast esplicito in C++

```c++
varTipo1 = static_cast<Tipo1>(varTipo2);  //cast "base"
varTipo1 = const_cast<Tipo1>(varTipo2);   //questo cast serve quando si vuore "rimuovere" la protezione al dato 
varTipo1 = reinterpret_cast<Tipo1>(varTipo2);  //reinterpreta completamente il tipo di dati (cast da double a struct)
varTipo1 = dynamic_cast<Tipo1>(varTipo2);  //cast per oggetti polimorfi
```