main: main.o rate.o
	g++ -o main main.o rate.o
main.o: main.cpp rate.h
	g++ -c main.cpp
rate.o: rate.cpp rate.h
	g++ -c rate.cpp
clean:
	rm main*.o
