CC=g++
CFLAGS=-o
TARGET=game.exe

IDIR=include
DEPS=Chest.h Cow.h Goblin.h Map.h Room.h Tree.h

LDIR=lib
OBJ=*.cpp

gameTest: gameTest.cpp
	$(CC) gameTest.cpp $(LDIR)/$(OBJ) $(CFLAGS) $(TARGET)
game: game.cpp
	$(CC) game.cpp $(LDIR)/$(OBJ) $(CFLAGS) $(TARGET)
