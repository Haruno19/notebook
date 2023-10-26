## Makefile
###### 26.10.2023

```make
CXXFLAGS = -O3 -DNDEBUG
CXXINCLUDES = ./include

main.out: main.o header.o
    g++ $(CXXFALGS) main.o header.o -o main.out

main.o: main.cpp
    g++ $(CXXFALGS) -I$(CXXINCLUDES) -c main.cpp -o main.o

header.o: src/header.cpp
    g++ $(CXXFALGS) -I$(CXXINCLUDES) -c src/header.cpp -o header.o

.PHONY: clear doc all

clear:
    rm *.o *.out

doc:
    doxygen

all: main.out doc
```

```
> make
g++ -O3 -DNDEBUG -I./include -c main.cpp -o main.o
g++ -O3 -DNDEBUG -I./include -c src/header.cpp -o header.o
g++ -O3 -DNDEBUG main.o header.o -o main.out
> make main.o
g++ -O3 -DNDEBUG -I./include -c main.cpp -o main.o
> make clean
rm *.o *.out
```

