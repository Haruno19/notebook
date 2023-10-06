#include <iostream>
#include <string>

int main()
{
    std::string s;

    std::cout << "> ";
    std::cin >> s;
    std::cout << ": " << s << std::endl;

    double n = 0;
    std::cout << "> ";
    std::cin >> n;
    //cerr a differenza di cout non fa buffering 
    std::cerr << ": " << n << std::endl;

    //print();

    return 0;
}