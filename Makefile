project2: calc.o dictionary.o exceptions.o fraction.o
	g++ -o project2 calc.o dictionary.o exceptions.o fraction.o 

calc.o: dictionary.h exceptions.h fraction.h stack.h calc.cc
	g++ -c calc.cc

dictionary.o: dictionary.h exceptions.h dictionary.cc
	g++ -c dictionary.cc

exceptions.o: exceptions.h exceptions.cc
	g++ -c exceptions.cc

fraction.o: fraction.h fraction.cc
	g++ -c fraction.cc
