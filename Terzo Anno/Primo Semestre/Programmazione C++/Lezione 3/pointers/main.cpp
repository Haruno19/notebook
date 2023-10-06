#include <iostream>

int main()
{
    /*
        I puntatori sono dati particolari che contengono un'indirizzo di memoria
    */

    int test = 1000;

    int *tp = nullptr; 

    tp = &test;  //l'operatore & ritorna l'indirizzo della variabile a cui viene applicato

    std::cout << "Contenuto di test: " << test << std::endl;
    std::cout << "Indirizzo di test: " << &test << std::endl;
    std::cout << "Contenuto di tp: " << tp << std::endl;
    std::cout << "Indirizzo di tp: " << &tp << std::endl;

    int test2 = 999;

    tp = &test2;

    //stampo il puntatore deferenziato
    std::cout << "Contenuto del dato puntato da tp: " << *tp << std::endl;

    *tp = 100; //test2 = 100

    int *tp2 = tp;
    tp2 += 1; //tp2 + 1*sizeof(int)


    return 0;
}