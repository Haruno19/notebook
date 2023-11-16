## Template [2]
###### 16.11.2023

Si possono definire classi template

```c++
template <typename T> class classname
{
    //...
}
```

Come nell'esempio dbuffer, è possibile utilizzare le variabili template per definire i tipi dei dati della classe

```c++
template <typename T> class classname
{
    //traits della classe
    public:
        typedef T value_type;
}
```

Questi `typedef` pubblici sono dati che la classe *espone* all'esterno, vengono chiamati **traits** della classe

---  
Nel *makefile* mettiamo come dependecy di `main.cpp` anche il file header `.hpp`, in quanto se dovessero esserci modifiche nel file hpp templato, il makefile non le rileverebbe  

---
È necessario e corretto gestire eventuali eccezioni per mancata allocazione di dati custom quando si utilizzano tipi template;

```c++
template <typename T> class classname
{
    //traits della classe
    public:
        typedef T value_type;

    private:
        value_type *_p;

    public:
        classname(const value_type &value) : _p(nullptr)
        {
            _p = new value_type[10];

            for(int i=0; i<10; i++)
                _p[i] = value; //!!!
        }
}
```

Per prima cosa, notare che il valore passato al costruttore è una *reference costante*, in qunato `value_type` può essere un tipo custom, è più efficente passare parametri di questo tipo sempre per reference.  

L'assegnamento `_p[i] = value;` potrebbe avere necessità di allocare memoria in base al tipo di dato `value_type`, e questa allocazione potrebbe generare eccezioni, causando un *memory leak*; è dunque necessario gestire l'eccezione con un blocco *try-catch*  

```c++
template <typename T> class classname
{
    //traits della classe
    public:
        typedef T value_type;

    private:
        value_type *_p;

    public:
        classname(const value_type &value) : _p(nullptr)
        {
            _p = new value_type[10];

            try 
            {
                for(int i=0; i<10; i++)
                    _p[i] = value; //!!!
            }catch(...){
                delete[] _p;
                _p = nullptr;
                throw;
            }
        }
}
```

In generale, allocare *qualcosa* e assegnare valori a *qualcosa* catchado l'eccezione è un pattern standard, è necessario try-catchare tutte le possibile eccezioni quando si assegna qualcosa ad un dato dinamico templato