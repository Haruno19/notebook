## Inline
###### 19.10.2023

La keyword **inline** nella dichiarazione di una funzione, chiede al compilatore, laddove possibile, di sostituire le chiamate a tale funzione con il codice stesso della funzione. È utile in termini di efficienza, soprattutto se la funzione è utilizzata spesso  

Il codice:
```c++
inline int max(a, b)
{
    return (a>b) ? a:b;
}

int main()
{
    int a=4, b=5, c=6, d=7;

    int s = max(a,b) + max(c,d);
    
    return 0;
}
```
risulterebbe dunque equivalente a:
```c++
int main()
{
    int a=4, b=5, c=6, d=7;

    int s = (a>b) ? a:b + (c>d) ? c:d
    
    return 0;
}
```
