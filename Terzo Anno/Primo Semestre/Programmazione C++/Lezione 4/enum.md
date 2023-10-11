## Enum
###### 11.10.2023

Un enumerativo in C++ è un modo per definire un elenco di costanti e assegnarci a nome

```c++
enum weekday { mon=1, tue=2, wed=3, thu=4, fri=5 };

weekday g;
g = mon; //g = 1
int d = tue;
```

In una definizione di questo tipo
```c++
enum weekday { mon=1, tue, wed, thu, fri }
```
Il compulatore assegna valori interi incrementali alle costanti non assegnate
