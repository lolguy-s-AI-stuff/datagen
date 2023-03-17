all:
	g++ -o bin/datagen main.cpp -lcurl
run: all
	./bin/datagen