## Initializer Lists
###### 16.11.2023

È possibile definire inizializzazioni di variabili nel costruttore con la seguente sintassi:

```c++
class c
{
    int a, b;
    
    public:
    c() : a(0), b(1)
    {
        //...
    }
}
```

`a` e `b` vengono inizializzati rispettivamente a `0` e `1`