## Retrun
###### 19.10.2023

È necessario fare attenzione ai valori di ritorno delle funzioni, sopratutto quando ritorno puntatori o reference

```c++
int &func()
{
    int r = 3;

    return r;
}

int *func()
{
    int r = 3;

    return &r;
}
```

In entrambi i casi, la variabile `r` termina il suo ciclo di vita quando la funzione `func()` termina, quindi non esiste più all'uscita della funzione  

Ha senso invece ritornare puntatori a dati allocati dimanicamente; in questo caso però, il chiamante riceve anche la **responsabilità di deallocare** il dato