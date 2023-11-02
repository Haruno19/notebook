## Classi
###### 02.11.2023

```c++
class class_name
{
    //metodi e attributi privati

    public:
    //metodi e attributi pubblici

    private:
    //metodi e attributi privati

    protected:
    //metodi e attributi protetti
};

```

Il contenuto di una classe in C++ è di default _privato_, è possibile definire _sezioni_ di elementi pubblici, privati e protetti. I dati _protected_ sono privati ma accessibili dalle classi figlie.   
Una classe incorpora un _namespace_

```c++
class class_name
{   
    int _attributo;
};
```

È buona norma "decorare" i dati membro della classe, spesso si fa con un _ davanti al nome.

```c++
class class_name
{
    public:
    
    class_name();
}
```

Il _costruttore_ è il **primo metodo fondamentale** di una classe, è bene che sia sempre definito, e deve essere pubblico.  
Il costruttore di default non pende parametri.

```c++
class class_name
{
    public: 
    
    class_name();

    ~class_name();
}
```

Il _distruttore_ è il **secondo metodo fondamentale** di una classe, serve a rilasciare tutte le risorse richieste dall'oggetto.  
Il distruttore viene chiamato automaticamente per gli oggetti automatici (su stack) quando l'oggetto esce dallo scope o viene eliminato.

```c++
class class_name
{
    public: 
    
    class_name(const class_name &other);

}
```
Il _copy constructor_ è il **terzo metodo fondamentale** di una classe, un costruttore che prende come parametro la reference ad un oggetto già esistente della stessa classe e ne crea una copia.  
In assenza di una definizione, il compilatore ne crea uno che costruisce per copia i dati membro a membro.

```c++
class class_name
{
    public: 
    
    dbuffer& operator=(const dbuffer &other);

}
```
L'operatore di _assegnamento_ è il **quarto e ultimo metodo fondamentale** di una classe, copia il contenuto di un dbuffer in quello corrente.  
In tutti gli operatori assegnamento deve esserci il ritorno di `*this` e il controllo dell'auto assegnamento.