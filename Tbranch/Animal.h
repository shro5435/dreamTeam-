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
	
	Animal("Turtle Turtle"){};

	int GetPower() { return 7; };

};

	class Doge : public Animal {
public:
	Doge();
	
	Animal("Bow-Wow Bow-Wow"){};
	
	

	int GetPower(){ return 10; };

};


// Define your animals here

#endif  // _ANIMAL_H_
