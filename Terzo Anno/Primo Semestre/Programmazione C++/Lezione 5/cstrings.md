## C Strings
###### 12.10.2023

Una stringa C è una sequenza di caratteri che termina col carattere terminatore '\0'
Un **puntatore a char** (o un array di char) è una stringa C

```c++
char str1[10] = "Ciao";
char str2[] = {'C', 'i', 'a', 'o', '\0'};
char *strp = "Ciao" //stringa costante!
```

La lunghezza dell'array deve sempre essere di almeno una cella più grande della stringa da memorizzare, perchè deve terminare con il carattere terminatore

