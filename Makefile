CC = mpic++
CFLAGS = -Wall -O3 --std=c++11

main.exe : main.o random.o lib.o city.o path.o
	$(CC) path.o city.o lib.o random.o main.o -o main.exe
main.o : main.cpp
	$(CC) -c main.cpp -o main.o $(CFLAGS)
random.o : RandomGenerator/random.cpp RandomGenerator/random.h
	$(CC) -c  RandomGenerator/random.cpp -o random.o $(CFLAGS)
lib.o : lib.cpp lib.h
	$(CC) -c lib.cpp -o lib.o $(CFLAGS)
city.o : city.cpp city.h
	$(CC) -c city.cpp -o city.o $(CFLAGS)
path.o : path.cpp path.h
	$(CC) -c path.cpp -o path.o $(CFLAGS)
clean :
	rm *.o main.exe seed.out
