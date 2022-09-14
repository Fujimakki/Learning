prog: ent.o main.o outp.o
	g++ main.o ent.o outp.o -o programm
	rm *.o


main.o: main.cpp
	g++ -c main.cpp -o main.o


ent.o: ent.cpp
	g++ -c ent.cpp -o ent.o


outp.o: outp.cpp
	g++ -c outp.cpp -o outp.o