#ifndef DBUFFER_HPP
#define DBUFFER_HPP

#include <ostream>

template <typename T>
class dbuffer
{
    //traits della classe
    public:
    typedef unsigned int size_type;
    typedef T value_type;

    private:
    size_type _size;
    value_type * _buffer;

    public:
    dbuffer() : _size(0), _buffer(nullptr) 
    {
        #ifndef NDEBUG 
        std::cout<<"dbuffer::dbuffer()"<<std::endl;
        #endif
    }

    explicit dbuffer(size_type size) : _size(0), _buffer(nullptr) 
    {
        _buffer = new value_type[size];
        _size = size; 
    }

    dbuffer(size_type size, const value_type &value) : _size(0), _buffer(nullptr) 
    {
        _buffer = new value_type[size];
        _size = size; 

        try {
            fill(value);
        }catch(...){    //catch qualsiasi eccezione
            /*
                dato che non sappiamo di che tipo sia _dbuffer, può essere un tipo custom
                e per questo, l'assegnamento nella fill() potrebbe dover allocare memoria e dunque causare eccezioni
            */
            delete[] _buffer;    //riporto l'oggetto in uno stato consistente evitando memory leak
            _buffer = nullptr;
            _size = 0;
            throw;               //rilancio l'eccezione catchata
        }
    }

    ~dbuffer() 
    {
        delete[] _buffer;

        _buffer = nullptr;
        _size = 0;
    }

    dbuffer& operator=(const dbuffer &other) 
    {
        if (this != &other) 
        { 
            dbuffer tmp(other);
            this->swap(tmp);   
        }

        return *this;
    }

    const value_type& operator[](size_type index) const
    {
        assert(index < _size);

        return _buffer[index];
    }

    value_type& operator[](size_type index) 
    {
        assert(index < _size);

        return _buffer[index];
    }

    size_type size(void) const 
    {
        return _size;
    }
    
    void fill(const value_type &value) 
    {
        dbuffer tmp(_size); //dentro la classe templata tutte le occorrenze dbuffer sono implicitamente dbuffer<T>

        for(size_type  i=0; i<_size; ++i)
            tmp[i] = value;  //Può fallire perchè tmp esce di scope (distruttore)!
        
        tmp.swap(*this);
    }

    void swap(dbuffer &other)
    {
        std::swap(this->_size, other._size);
        std::swap(this->_buffer, other._buffer); 
    }

    //costruttore secondario che costruisce un dbuffer<T> a partire da un array primitivo di dati generici, lasciare al compilatore il cast tra Q e T
    //e.g. dbuffer<int> da char[]
    template <typename Q>
    dbuffer(const Q* array, size_type size) : _size(0), _buffer(nullptr)
    {
        assert(array != nullptr);

        _buffer = new value_type[size];

        try
        {
            for(size_type i=0; i<size; i++)
            {
                _buffer[i] = static_cast<value_type>(array[i]);
            }
        }catch(...){
            delete[] buffer;
            _buffer = nullptr;
            throw;
        }

        _size = size;
    }

};

template <typename T>
std::ostream& operator<<(std::ostream &os, const dbuffer<T> &db)
{
    os << db.size() << " [ ";
    //typename dbuffer<T>::size_type  dice al compilatore che dbuffer<T>::size_type è un tipo di dato e non una variabile membro statica
    //essendo la classe generica (templata), il compilatore non sa cosa sia dbuffer<T>::size_type dall'esterno, 
    //dobbiamo "aiutarlo" dicendogli che è un tipo di dato con la keyword typename
    for(typename dbuffer<T>::size_type  i = 0; i < db.size(); ++i)
        os << db[i] << " ";
    os << "]";
    
    return os;
}

#endif