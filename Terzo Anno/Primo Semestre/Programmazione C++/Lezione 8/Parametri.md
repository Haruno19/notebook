## Parametri
###### 19.10.2023

Il modo in cui vengono passati i parametri alle funzioni può variare in base al contesto e alle situazioni  

---

Il passaggio di parametro più semplice è quello **per copia**
```c++
void f(int i)   //int i = im
{
    i = 2;
}

int main()
{
    int im = 1;
    f(im);

    return im;   //1
}
```

La variabile `i` è locale alla funzione `f()`, e il valore della variabile `im` del `main` viene copiato nella variabile `i`. Esistono quindi due variabili in memoria, e i cambiamenti fatti a `i` non si riflettono su `im`

---

Un secondo tipo di passaggio di parametro, è **per puntatore** 
```c++
void f(int *p)   //int *p = &im
{
    *p = 2;
}

int main()
{
    int im = 1;
    f(&im);

    return im;   //2
}
```
La funzione ha quindi l'indirizzo della variabile, percui la variabile in memoria è una sola, e i cambiamenti al contenuto del puntatore `*p` si riflettono su `im`  

Non copiando i dati, la chiamata è più veloce quando si tratta di passare variabili di grandi dimensioni, e non viene occupato spazio aggiuntivo nello stack

---

Un terzo tipo di passaggio di parametro, è tramite **reference**

```c++
void f(int &r)   //int &r = i
{
    r = 2;
}

int main()
{
    int im = 1;
    f(im);

    return im;   //2
}

Come per i puntatori, anche per reference c'è condivisione di dati, ma non c'è differenza di dereferenziare i puntatori
```

---

Quando serve passare come parametro un **array**, l'unico modo possibile è per puntatore

```c++
void f(int *a) 
{ 
    a[0] = 0;
}

int main()
{
    int im[3] = { 1, 2, 3 };
    f(im);

    return a[0];   //0
}
```
In questo modo però, si perde l'informazione riguardo la dimensione dell'array

---

È possibile utilizzare la keyword `const` quando si dichiarano i parametri

---

È possibile usare valori di default come parametri delle funzioni

```c++
void f (int a, int b=90);

int main()
{
    f(10);
    f(10, 11);

    return 0;
}
```

È necessario però che i parametri con valori di default devono essere messi a destra

```c++
void f (int a=90, int b);  //Errore
```