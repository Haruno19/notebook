#include "direttive2.cpp"
#include "direttive3.h"
#define A 123
#define FUNC(a) 2*a+3

extern int v4; //dichiarazione di variabile
//la variabile esiste globalmente ma è instanziata in un altro file

double d = A+10;

#ifdef B
    int j = 900;
#else
    int j = 1000;
#endif

double a = FUNC(j);