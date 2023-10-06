#include <iostream>

int main()
{
    
    /*
        Ai tipi di base si possono aggiungere qualificatori per modificarne le proprietà
    */

    int i;
    unsigned int ui;
    short int si;
    long int li;

    char c;

    double d;
    long double ld;

    float f;

    bool b;

    /*
        La dimensione del tipo di dato, o meglio, lo spazio allocato alle variabili in base al loro tipo, 
        dipende dal sistema. Esistono però dei limiti di grandezza definiti dallo standard

        la funzione sizeof() ritorna esattamente la dimensione del tipo specificato come parametro
    */

    std::cout << sizeof(int);

    return 0;
}