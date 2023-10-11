## Struct
###### 11.10.2023

Per "impacchettare" dati semplici in dati composti, si può usare in C++ il costrutto **struct**

```c++
struct Punto
{
    int x;
    int y;
};
```

Quando definisco una struct, sto definendo un *tipo*  
I dati al suo interno sono *pubblici*  

```c++
Punto p;
p.x = 1;
p.y = 0;
```

La sintassi per l'accesso ai campi cambia se uso un puntatore a struct
```c++
Punto *pt;
pt->x = 1;
pt->y = 0;
```

Si può inizializzare uno struct:
```c++
struct Punto
{
    int x;
    double y;
    char array[5];
};

Punto p = { 1, 2.3, "CIAO" };
```

### Quanta memoria occupano le struct?
La dimensione del dato complessivo dipende dai singoli dati membro, ma non sempre.

```c++
struct S1
{
    char a;
    int i;
    char b;
};

struct S2
{
    char a;
    char b;
    int i;  
};
```

Il compilatore può decidere, per questioni di efficienza, in base all'architettura, di cambiare la dimensione da allocare alla struct.  
Ad esempio, aggiungendo del padding ai dati più piccoli per facilitare la velocità di accesso ai dati.  
L'ordine del tipo dei membri cambia anche la dimensione, solitamentead esempio, `S1` pesa `12 byte` mentre `S2` ne pesa `8`. 