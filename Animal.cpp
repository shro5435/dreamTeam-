#include <iostream>
#include <string>

#include "Animal.h"

void Animal::Fight(Animal &opponent) {
	// first animal wins ties
	std::cout << this->GetPower() << std::endl;
	std::cout << opponent.GetPower() << std::endl;
	if (this->GetPower() >= opponent.GetPower()) {
		std::cout << this->MakeSound() << std::endl;
	} else {
		std::cout << opponent.MakeSound() << std::endl;
	}
<<<<<<< HEAD

Animal Pig; 
Pig->MakeSound(); //should return oink oink 
pig->Fight(Turtle()); 
Pig->GetPower(); //should return 10
=======
}
>>>>>>> 4f8ab0c5c0d79bb8e00fcbf7015454eff95bdf2b
