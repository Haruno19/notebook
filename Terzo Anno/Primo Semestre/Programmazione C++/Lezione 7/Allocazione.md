## Allocazione
###### 18.10.2023

Le variabili in C++ possono avere diversi tipi di allocazione e diversi cicli di vita 

Le variabili **globali** vengono definite all'esterno di funzioni o classi, e sono visibili in tutta l'unità di compilazione. Vivono fino al termine del programma

`file1.cpp`
```c++
#include <iostream>

int g;

int main()
{
    g = 1;
    std::cout << g;

    return 0;
}
```

È possibile renderle visibili in altre unità di compilazione tramite la keyword **extern**

`file1.h`
```c++
extern int g;
```

---

Le variabili con visibilità locale, definite all'interno di funzioni, sono allocate e deallocate automaticamente nello **stack**, la porzione di memoria fissa e pre-assegnata a ogni processo.

---

Le variabili locali **statiche** si definiscono con la keyword *static* si definiscono in uno scope e hanno visibilià nello scope nel quale sono state definite, ma vita globale

```c++
void f()
{
    static int s=0;

    s++;
}

f(); //s = 1;
f(); //s = 2;
```

---

I dati dinamici sono dati allocati dinamicamente a runtime nello spazio di memoria detto **heap**. Si utilizzano dei puntatori; si alloca con la keyword **new** e si dealloca con la keyword **delete** 

```c++
void f()
{
    Struct obj
    {
        double d;
        int i;
    };

    obj *o = new obj; //alloca

    delete o;         //dealloca
}
```

Il puntatore `*o` è allocato sullo stack e la sua vita finisce la sua quando termina la funzione `f()`. Se non facessi la delete dentro f(), l'obj allocato rimarebbe allocato anche dopo il ritorno della funzione f();

Si possono allocare array dinamicamente
```c++
int *p, n = 5;

p = new int[n]; //array nell'heap

delete[] p; //dealloca tutti gli elementi degli array 
```