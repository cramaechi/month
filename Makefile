month: main.o month.o
	g++ main.o month.o -o month

main.o: main.cpp
	g++ -c main.cpp

month.o: month.cpp month.h
	g++ -c month.cpp

clean:
	rm *.o month
