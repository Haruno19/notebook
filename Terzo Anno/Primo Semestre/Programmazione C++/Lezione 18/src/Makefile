CXXFLAGS = 

CXXINCLUDES = .

main.out: main.o 
	g++ $(CXXFLAGS) main.o -o main.out

main.o: main.cpp dbuffer.hpp
	g++ $(CXXFLAGS) -I$(CXXINCLUDES) -c main.cpp -o main.o

.PHONY: clean doc all

clean:
	rm *.o *.out

doc:
	doxygen

all: main.out doc
