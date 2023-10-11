## Array
###### 11.10.2023

Un array è una *sequenza contingua di dati*, continua in quanto i dati si trovano in posizioni di memoria conseguenti 
  
Un array **statico** si definisce come segue:
```c++
int array1[3];
```
Si parla di array statico perchè la sua dimensione è definita in **fase di compilazione** e non può cambiare

È possibile inizializzare gli array:
```c++
char array2[3] = {'a', 'b', 'c'};
char array3[3] = {'a', 'b'};
int array4[] = {1, 2, 3, 4, 5};
```
Nel caso di `array4`, le prime due sue celle, `[0]` e `[1]` saranno inizializzate a `'a'` e `'b'`  
Nel caso di `array4`, la sua dimensione è determinata automaticamente dal compilatore

Non c'è nessun controllo in accesso alla memoria, è possibile finire *out of bounds*

È possibile definire array multidimensionali:
```c++
int array5[2][3] = {{1, 2, 3}, {4, 5, 6}};
```

Si può assegnare ad un puntatore un array dello stesso tipo:
```c++
int array[3] = {1, 2, 3};
int *p;

p = array; 
p = &array[0]; //equivalente
```

Spostandomi avanti (o indietro) con il puntatore, posso "navigare" l'array  
```c++
int array[3] = {1, 2, 3};
int *p;

p = array;  //p punta a array[0]
p++;        //p punta a array[1]
```

Non è però possibile (errore di compilazione per incompatibilità tra i tipi) usare un puntatore semplice per un array a più dimensioni
```c++
int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
int (*p)[3]; 

p = array; //p punta alla prima riga di array
```
`p` è un puntatore ad un array, dunque non punta ad un solo intero ma ad una riga dell'array  

Attenzione!
```c++
int (*p)[3]; //puntatore ad un array di 3 interi
int *p[3];   //array di tre puntatori a intero 
```