CXX = g++
CXXFLAGS	= -std=c++11 -Wall
<<<<<<< HEAD
=======

all: animal
	
run: animal 
	./animal

clean:
	rm Animal.o animal

animal: Animal.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp Animal.o -o animal

Animal.o: Animal.cpp
	$(CXX) $(CXXFLAGS) -c Animal.cpp
>>>>>>> 4f8ab0c5c0d79bb8e00fcbf7015454eff95bdf2b

all: animal
	
run: animal 
	./animal

clean:
	rm Animal.o animal

animal: Animal.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp Animal.o -o animal

Animal.o: Animal.cpp
	$(CXX) $(CXXFLAGS) -c Animal.cpp