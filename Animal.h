#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal {
public:
	Animal(std::string sound):
	sound_(sound)
	{}

	std::string MakeSound() const {return sound_; }

	void Fight(Animal &opponent);

	virtual int GetPower() { return 0; };

private:
	std::string sound_;
};

class Turtle : public Animal {
public:
	Turtle():
	Animal("turtle turtle turtle")
<<<<<<< HEAD
	int GetPower() { return 7; };

	{}

class Pig(): public Animal 
	Animal ("Oink Oink")
	{}
	int GetPower(){return 10;}; 
	{}

=======
	{}


	int GetPower() { return 7; };
>>>>>>> 4f8ab0c5c0d79bb8e00fcbf7015454eff95bdf2b

};

// Define your animals here

#endif  // _ANIMAL_H_