## Strings
###### 12.10.2023

Esiste un oggetto **string** in C++ per rappresentare le stringhe

```c++
#include <string>

std::string s1;
std::string s2 = "Ciao";

s1 = "Ciao";
s1[0] = "C";

s1.c_str(); //ritorna la C String corrispondente
```