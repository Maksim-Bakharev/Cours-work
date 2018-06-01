CFLAGS = -Wall -Werror -std=c99
OBJ = gcc -c $< -o $@ $(CFLAGS)

.PHONY: all clean

all: bin build bin/main.exe


bin/main.exe: build/main.o build/labirint.o build/Snegovik.o build/Win.o build/Ykrachenia.o build/Loose.o build/Outtext.o build/OuttextJ.o build/OuttextT.o build/Polozhenie.o
	gcc $^ -o $@ $(CFLAGS)

build/main.o: src/main.c
	$(OBJ)

build/labirint.o: src/labirint.cpp
	$(OBJ)

build/snegovik.o: src/snegovik.cpp
	$(OBJ)

build/Win.o: src/Win.cpp
	$(OBJ)

build/Ykrachenia.o: src/Ykrachenia.cpp

	$(OBJ)
build/Loose.o: src/Loose.cpp
	$(OBJ)

build/Outtext.o: src/Outtext.cpp
	$(OBJ)

build/OuttextJ.o: src/OuttextJ.cpp
	$(OBJ)

build/OuttextT.o: src/OuttextT.cpp
	$(OBJ)

build/Polozhenie.o: src/Polozhenie.cpp
	$(OBJ)


build: 
	mkdir build
bin:
	mkdir bin


clean:
	rm build/*.o
	rm bin/*.exe
