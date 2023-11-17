## Ridefinzione Operatori
###### 08.11.23
###### _Il codice in questo file è di esempio e non è completo, per ogni stampa di oggetto con cout bisogna ridefinire l'operatore << sull'oggetto, con adeguate modifiche alla classe per rendere tale ridefinzione possibile e sematicamente sensata_
---

In C++ è possibile ridefinire gli operatori. Un operatore può essere ridefinito all'interno di una **classe**, e quindi valido per gli oggetti di quella classe, oppure **globalmente**.  

Ci sono due tipi di operatori: **unari** e **binari**

### Operatori Unari di Classe

Un operatore unario membro di una classe *non* prende parametri:

```c++
class Classname
{   
    int i;

    public: 

    Classname() : i(0) { }
    Classname(int _i) : i(_i) { }

    Classname operator-() const
    {
        Classname tmp(-i);
        return tmp;
    }
}

int main()
{
    Classname c1(2);
    std::cout << -c1 ; //-2
    //...
}
```

In questo esempio, l'operatore - è un operatore _prefisso_, il suo scopo è quello di ritornare il _valore_ dell'espressione `-c1` dove `c1` è un oggetto di classe `Classname`  

Un altro esempio di operatore unario può essere `++`

```c++
class Classname
{
    int i;

    public: 

    Classname() : i(0) { }
    Classname(int _i) : i(_i) { }

    Classname& operator++() const   //prefisso
    {
        ++i;
        return *this;
    }

    Classname operator++(int) const //postfisso
    {
        Classname tmp(i);
        i++;
        return tmp;
    }
};

int main()
{
    Classname c1(2);
    Classname c2(2);
    std::cout << ++c1;  //3  | c1.i = 3
    std::cout << c2++;  //2  | c2.i = 3
    //...
}
```
Si può distinguere un operatore **postfisso** da uno **prefisso** aggiungendo un *place parameter* di tipo `int` nella sua lista dei parametri.  

`++` è un operatore la cui semantica cambia in base alla versione (postfisso o prefisso) che viene utilizzata;  
  
Il **ritorno** dell'operatore dev'essere il **valore** dell'espressione, ovvero come vogliamo sia **valutata** l'espressione che utilizza quell'operatore; eventuali effetti che l'operatore ha sull'oggetto sul quale viene richiamato, non sempre si rifletto nella valutazione dell'espressione.   

Ad esempio, l'operatore di **pre-incremento** `++c1`, incrementa effettivamente il valore di `c1` (con le sue implicazioni semantiche), e vuol essere valutata come il valore di `c1` *già* incrementato.   

L'operatore di **post-incremento** `c2++`, incrementa effettivamente _(ha effetto)_ il valore di `c2`, ma vuol essere valutato come il valore di `c2` *prima* di esssere stato incrementato.  

Il risultato (effetto) che l'operatore ha sull'oggetto è uguale in entrambi gli operatori, ma la valutazione dell'espressione è differente.  

Inoltre, si può notare come l'operatore prefisso ritorni una **reference**, questo è per evitare la copia di un eventuale ritorno per valore; l'operatore postfisso ritorna invece **per valore**, in quanto ritorna un oggeto `tmp` creato *localmente*, se fosse ritornato per reference, si potrebbe verificare un errore a runtime, in quanto `tmp`, uscendo di scope, viene **distrutto** al termine dell'operatore.

### Operatori Binari di Classe

Gli operatori binari di classe prendono *un* parametro:

```c++
class Classname
{
    int i;

    public: 

    Classname() : i(0) { }
    Classname(int _i) : i(_i) { }

    Classname operator+(const Classname& other) const
    {
        Classname tmp(i + other.i);
        return tmp;
    }
};

int main()
{
    Classname c1(2);
    Classname c2(3);
    std::cout << c1 + c2 ; //5
    //...
}
```

Anche in questo caso, essendo il ritorno dell'operatore `+` semanticamente valido solo per la valutazione dell'espressione che lo utilizza (`c1+c2`), il ritorno avviene per valore, e non ha alcun effetto sugli oggetti sul quale è chiamato (come per l'operatore prefisso `-`)

### Operatori Unari Globali

Un operatore unario globale prende *un* parametro:

```c++
class Classname
{
    int i;

    public: 

    Classname() : i(0) { }
    Classname(int _i) : i(_i) { }

    int geti() { return i; }
};

Classname operator-(const Classname& X)
{
    Classname tmp(-X.geti());
    return tmp;
}


int main()
{
    Classname c1(2);
    std::cout << -c1 ; //-2
    //...
}
```

L'operatore globale, ovviamente, non è più chiamato implicitamente su un'oggetto, quindi ha bisogno di un riferimento a tale oggetto per poterci operare.   

È importante notare come, essendo l'operatore globale e non più membro, non ha più la facoltà di accedere ai dati **privati** degli oggetti: è necessario utilizzare metodi **pubblici** come `geti()`.  

Un operatore unario globale **postfisso**, analogamente alla versione di classe, si distingue usando un *place parameter* di tipo `int`:

```c++
class Classname
{
    int i;

    public: 

    Classname() : i(0) { }
    Classname(int _i) : i(_i) { }

    int geti() const { return i; }
    void seti(int _i) { i=_i; };
};

Classname operator++(const Classname& X, int)
{
    Classname tmp(X.geti()); 
    X.seti(X.geti()+1);
    return tmp;
}


int main()
{
    Classname c1(2);
    std::cout << c1++ ; //2  | c1.i = 3
    //...
}
```

Come in precedenza, l'operatore di postincremento ha effetto sull'oggetto (modificando lo stato dell'oggetto `X` con `X.seti()`), ma la sua valutazione dell'espressione è il valore dell'oggetto `X` prima dell'incremento.  

### Operatori Binari Globali

Un operatore binario globale prende *due* parametri:

```c++
class Classname
{
    int i;

    public: 

    Classname() : i(0) { }
    Classname(int _i) : i(_i) { }

    int geti() const { return i; }
};

Classname operator+(const Classname& X, const Classname& X,)
{
    Classname tmp(X.geti() + Y.geti());
    return tmp;
}

int main()
{
    Classname c1(2);
    Classname c2(3);
    std::cout << c1 + c2 ; //5
    //...
}
```

Come per il caso precedente, l'operatore definito globalmente necessita di avere un riferimento a tutti gli oggetti su cui opera, e anche in questo caso, per accedere ai campi privati degli oggetti deve servirsi di metodi pubblici. 

### Osservazioni
L'operatore assegnamento `=` _deve_ essere definito come dato membro di classe, altrimenti il compilatore ne crea uno di default che effettua una copia member-wise.  

---

L'operatore `[]` _deve_ essere anch'esso definito all'interno della classe, prende sempre _un_ parametro non per forza intero:

```c++
class Classname 
{
    int a, b;
    
    public:

    Classname() : a(0), b(0) { }
    
    int &operator[](int index) 
    { 
        return (index==0) ? a : b; 
    }
};

int main()
{
    Classame c();
    c[0]=3;    // c.a = 3
    c[1]=-20;  // c.b = -20

    //...
}
```

---

L'operatore `()` _deve_ essere anch'esso definito all'interno della classe, può prendere più di un parametro:

```c++
class Classname 
{
    int a, b;
    
    public:
    
    Classname(int _a, int _b) : a(_a), b(_b) { }

    int operator()() const
    { 
        return a+b;
    }
};

int main()
{
    Classame c(1,2);
    
    int s = c();   // s = c.a + c.b

    //...
}
```
L'oggetto su cui viene ridefinito questo operatore è detto **funtore**.

---

Gli operatori ridefinibili sono:  
**Unari** prefissi: ```+ - * & ! ~ ++ --```  
**Unari** postfissi: ```++ --```  
**Binari**: ```+ - * / % ^ | & = || && == >= <= += -= *= /= %= ^= |= &= << <<= >> >>=```

Non è possibile ridefinire `.` e `::`, e non è possibile aggiungere nuovi operatori, e la redefinizone di operatori è possibile solo su *tipi custom* non primitivi
