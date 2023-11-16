#include <iostream>
#include <cassert>
#include "dbuffer.hpp"

int main()
{
   dbuffer<int> dbi(5, 0);
   std::cout << dbi << std::endl;
   dbuffer<double> dbd(7, 3.14);
   std::cout << dbd << std::endl;

   return 0;
}