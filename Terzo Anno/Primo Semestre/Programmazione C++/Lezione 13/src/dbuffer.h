#ifndef DBUFFER_H
#define DBUFFER_H

class dbuffer
{
    unsigned int _size; ///< dimensione dell'array
    int * _buffer;  ///< buffer

    public:

    /**
        Costruttore di default

        inizializza il dbuffer a un array dinamico vuoto

        @post _size == 0
        @post _buffer == nullptr
    */
    dbuffer();

    /**
        Costruttore secondario

        Permette di creare un array dinamico di interi della dimensione data

        @param size dimensione dell'array dinamico

        @post _size == size
        @post _buffer != nullptr
    */
    dbuffer(unsigned int size);

    /**
        Costruttore secondario

        Permette di creare un array dinamico di interi della dimensione data e inizializzato al valore dato

        @param size dimensione dell'array dinamico
        @param value valore di inizializzazione

        @post _size == size
        @post _buffer != nullptr
        @post _buffer[i] == value
    */
    dbuffer(unsigned int size, int value);

    /**
        Copy constructor

        crea una copia dell'oggetto passato come parametro

        @param other dbuffer sorgente da copiare

        @post _size == other._size
        @post _buffer[i] == other._buffer[i]
    */
    dbuffer(const dbuffer &other);

    /**
        Operatore assegnamento

        copia il contenuto di other dentro l'oggetto corrente 

        @param other dbuffer sorgente da copiare

        @return reference a this

        @post _size == other._size
        @post _buffer[i] == other._buffer[i]
    */
    dbuffer& operator=(const dbuffer &other);   //"*this" = other

    /**
        Distruttore

        @post _size == 0
        @post _buffer == nullptr;
    */
   ~dbuffer();

    /**
        Getter della dimensione dell'array

        @return dimensione dell'array
    */
    unsigned int size(void);

    /**
        Getter e setter di una cella dell'array 

        @param index indice della cella la leggere/scrivere
        @return reference alla cella da leggere/scrivere

        @pre index < _size
    */
    int& value (unsigned int index);
    //db.value(4) = db.value(5) -> _buffer[4] = _buffer[5]
    //senza esporre il puntatore! :)

    /**
        Funzione di swap

        scambia i contenuti di this con quelli di other

        @param other dbuffer sorgente con cui scambaire i dati

        @post _size == other._size
        @post _buffer == other._buffer
        @post other._size == _size
        @post other._buffer == _buffer
    */
    void swap(dbuffer &other);
};

#endif