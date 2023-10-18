## Namespace
###### 18.10.2023

Si possono raggruppare variabili e funzioni sotto un **namespace**

```c++
namespace n1
{
    int var;
}

namespace n2
{
    int var;
}

n1::var = 1;
```

Si utilizza la keyword using per dire al compilatore in che namespace cercare le keyword che usiamo

```c++
namespace n1
{
    int var;
}

using namespace n1;

var = 1;
```