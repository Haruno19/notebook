#include <iostream>
#include "print.h"

/*
    g++ -c main.cpp
    g++ -c print.cpp
    g++ main.o print.o -o main.out
*/

int main()
{
    std::cout << "Hello world :)" << std::endl;
    
    print();

    return 0;
}