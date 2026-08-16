# GCC compiller
CC = gcc
CFLAGS = -Wall -I includes
SRC = main.c src/gui.c src/storage.c src/control.c
TARGET = program.out

gcc-comp:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) && ./${TARGET}


# clang
CLANG = clang

clang-comp:
	$(CLANG) $(CFLAGS) $(SRC) -o $(TARGET) && ./${TARGET}