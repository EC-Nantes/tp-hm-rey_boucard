OBJS	= main.o Vehicule.o Voiture.o
SOURCE	= main.cpp Vehicule.cpp Voiture.cpp
HEADER	= Vehicule.hpp Voiture.hpp
OUT	= projectCPP
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp -std=c11

Vehicule.o: Vehicule.cpp
	$(CC) $(FLAGS) Vehicule.cpp -std=c11

Voiture.o: Voiture.cpp
	$(CC) $(FLAGS) Voiture.cpp -std=c11



clean:
	rm -f $(OBJS) $(OUT)