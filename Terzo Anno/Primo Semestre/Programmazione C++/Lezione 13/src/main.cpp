#include "dbuffer.h"
#include <iostream>

int main()
{
    dbuffer db1;
    dbuffer db2(10, 0);

    dbuffer *db3 = new dbuffer(30);
    delete db3; db3 = nullptr; //chiamata esplicita al distruttore

    db2.value(4) = 100;
    db2.value(1) = db2.value(4);

    dbuffer db4(db2);
    std::cout << db4.value(1) << std::endl;

    dbuffer db5 = db4; //copy constructor! assegnamento fatto in costruzione
    std::cout << db5.value(1) << std::endl;

    dbuffer db6(4,1);
    db2 = db6;
    std::cout << db2.value(1) << std::endl; 

    return 0;
}