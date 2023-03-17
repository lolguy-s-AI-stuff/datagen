all:
	g++ -o bin/datagen main.cpp
run: all
	./bin/datagen