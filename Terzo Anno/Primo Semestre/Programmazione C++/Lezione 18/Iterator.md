## Interator
###### 16.11.2023

Un altro *costrutto fondamentale* delle classi container sono gli *iteratori*, ovvero oggetti che permetto di scorrere una sequenza di dati. Servoono a definire un'interfaccia comune mascherando il tipo di dati sorgente (vector, list...) con un generico concetto di "sequenza".  

Una sequenza è una **generica successione** di valori, ha un **inizio** e una **fine**.  

Esistono **metodi** standard per accedere ai dati tramite iteratore. Esistono diversi tipi di Iterator, ognuno dei quali ha diversi metodi;

- Forward
- Bidirectional
- Random Access

Quando si utilizza un Iterator, *tutti* i metodi necessari devono essere implementati.  

Esistono due Iterator "speciali:

- Input, sorgente dati, permette solo di leggere dati in sequenza
- Output, destizione di dati, riceve dati in sequenza e ci fa qualcosa

---
Sia definisce un iteratore in una classe container definendo la classe `iterator` all'interno di quella container. I nome (e le signature) sono standard per la stl di C++

```c++
class container
{
    //...

    const class iterator; //iteratore di sola lettura
    class iterator 
    {
        //...
    }
}
```

Come dato membro nella classe iterator, ci sarà un riferimento diretto alla struttura dati della classe container, perchè l'iteratore deve poter accedere a tale struttura direttamente, e propagare le eventuali modifiche nel suo oggetto sorgente. 

Il costruttore dell'iterator è *privato* perchè solo la classe container lo deve poter usare. La classe container è dunque `friend` della classe iterator

```c++
class container
{
    T *ptr;

    const class iterator; //iteratore di sola lettura
    class iterator 
    {
        private:
            T* ptr;

            friend class container;

            iterator(T* p)
            {
                ptr = p;
            }

        //...
    }
}
```

Tutte le classi container devono implemetare un metodo `interator begin()` per esporre un interatore  

Un altro metodo che la classe container deve implementare è `iterator end()`. In C++ gli iteratori "sanno" di aver terminato la sequenza quando viene raggiunto l'iteratore di end, ovvero l'iteratore che punta all'ultimo dato della sequenza

```c++
class container
{
    T *ptr;
    unsigned int size;

    const class iterator; //iteratore di sola lettura
    class iterator 
    {
       private:
            T* ptr;

            friend class container;

            iterator(T* p)
            {
                ptr = p;
            }
        
        //...
    }

    iterator begin()
    {
        return iterator(ptr);
    }

    iterator end()
    {
        return iterator(ptr+size);
    }
}
```

L'iteratore *end* punta ad una cella di memoria successiva a quella dove si trova l'ultimo dato della sequenza. Non bisogna mai usare l'iteratore di *end* per accedere ai dati, è solo un *segnaposto di fine*

---

Un *forward iterator* deve ridefinire i seguenti operatori:

```c++
class const_iterator;
class iterator 
{
    iterator() {}   //constructor

    iterator(const iterator &other) {}  //copy-constructor

    ~iterator() {}  //distruttore

    iterator& operator=(const iterator &other) {} //assegnamento

    reference operator*() const {}

    pointer operator->() const {}

    iterator operator++() {}    //post incremento

    iterator &operator++() {}   //pre incremento

    bool operator==(const iterator &other) const {} //uguaglianza

    bool operator!=(const iterator &other) const {} //uguaglianza

    friend class const_operator;

     bool operator==(const const_iterator &other) const {} //uguaglianza

    bool operator!=(const const_iterator &other) const {} //uguaglianza
}
```
Le stesse definizioni sono necessarie analogamente in `const_operator`

---
Per utilizzare l'iterator di una classe container, si procede nel seguente modo:

```c++
int main()
{
    container c;
    container::iterator it, ite;

    it = c.begin();
    ite = c.end();

    for(;it!=ite;it++)
    {
        std::cout << *it; 
    }

    return 0;
}
```