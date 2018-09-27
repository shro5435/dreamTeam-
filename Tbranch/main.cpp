#include <iostream>

#include "Animal.h"
#include <string>

int main() {
	Turtle turtle_friend;

	std::cout << turtle_friend.MakeSound() << std::endl;

	Doge doggo;
	std::cout << doggo.MakeSound() << std::endl;


	return 0;
}