OBJS	= main.o Vehicule.o
SOURCE	= main.cpp Vehicule.cpp
HEADER	= Vehicule.hpp
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



clean:
	rm -f $(OBJS) $(OUT)