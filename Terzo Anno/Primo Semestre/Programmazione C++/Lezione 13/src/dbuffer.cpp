#include "dbuffer.h"
#include <iostream>
#include <cassert>
#include <algorithm> //std::swap

dbuffer::dbuffer()
{
    _size = 0;
    _buffer = nullptr;

    #ifndef NDEBUG  //stampa di debug
        std::cout << "dbuffer::dbuffer()"<<std::endl;
    #endif
}

dbuffer::dbuffer(unsigned int size)
{
    _size = 0;
    _buffer = nullptr;

    _size=size;
    _buffer = new int[_size];

    #ifndef NDEBUG  //stampa di debug
        std::cout << "dbuffer::dbuffer(int size)"<<std::endl;
    #endif
}

dbuffer::dbuffer(unsigned int size, int value)
{
    _size = 0;
    _buffer = nullptr;

    _size=size;
    _buffer = new int[_size];

    for (int i=0; i<_size; ++i)
        _buffer[i] = value;

    #ifndef NDEBUG  //stampa di debug
        std::cout << "dbuffer::dbuffer(unsigned int size, int value)"<<std::endl;
    #endif
}

dbuffer::dbuffer(const dbuffer &other)
{
    _size = 0;
    _buffer = nullptr;

    _buffer = new int[other._size]; //posso accedere ai dati privati perchè mi trovo dentro la classe
    _size = other._size;

    for (int i=0; i<_size; ++i)
        _buffer[i] = other._buffer[i];

    #ifndef NDEBUG  //stampa di debug
        std::cout << "dbuffer::dbuffer(const dbuffer &other)"<<std::endl;
    #endif
}

dbuffer& dbuffer::operator=(const dbuffer &other)
{
    if(this != &other)
    {
        dbuffer tmp(other); //sfrutto il copy constructor
        /* scambio il contenuto delle variabili membro tra this e tmp, quando tmp esce dallo scope viene distrutto */
        this->swap(tmp);
    }
    
/*  int *tmp = new int[other._size];
    
    _size = 0;
    delete[] _buffer;
    _buffer = nullptr;

    _buffer = tmp;
    _size = other._size;

    for (int i=0; i<_size; ++i)
        _buffer[i] = other._buffer[i];
*/
    return *this;
}

dbuffer::~dbuffer()
{
    delete[] _buffer;

    _buffer = nullptr;
    _size = 0;

    #ifndef NDEBUG  //stampa di debug
        std::cout << "dbuffer::~dbuffer()"<<std::endl;
    #endif
}

unsigned int dbuffer::size(void)
{
    return _size;
}

int& dbuffer::value(unsigned int index)
{   
    assert(index < _size);

    return _buffer[index];
}

void dbuffer::swap(dbuffer &other)
{
    std::swap(this->_size, other._size);
    std::swap(this->_buffer, other._buffer);
}