## Pointers
###### 11.10.2023

È possibile concatenare i puntatori

```c++
int *p, **p1, ***p2;
int i = 10;

p = &i;
p1 = &p;
p2 = &p1;
```

È anche possibile definire puntatori a void, questi puntatori non fanno riferimento ad un tipo specifico, e possono essere assegnati a diversi tipi

```c++
void *pvd;
int i = 10;
double d = 1.1;

pvd = &i;
pvd = &d;
```

**Le funzionalità mostrate in questo file _non_ vanno usate nei programmi!!**  
**Sono funzionalità derivate da C**