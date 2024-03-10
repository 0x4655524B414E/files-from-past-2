#include <iostream>
using namespace std;

class Animal
{
protected:
	int legs;
public:
	Animal(int legs) : legs(legs) {}
	virtual void walk() 
	{
		cout << "Animal with " << this->legs << " legs is walking." << endl;
	}
	virtual void eat()
	{
		cout << "This animal is eating." << endl;
	}
};

class Pet
{
protected:
	string name;
public:
	string getName()
	{
		return this->name;
	}
	void setName(string name)
	{
		this->name = name;
	}
	virtual void play()
	{
		cout << this->name << " is playing." << endl;
	}
};

class Spider : public Animal
{
public:
	Spider() : Animal(8)
	{

	}
	void eat()
	{
		cout << "Spider cannot eat." << endl;
	}
};

class Cat : public Animal, public Pet
{
public:
	Cat(string name) : Animal(4), Pet()
	{
		this->name = name;
	}
	Cat() : Animal(4), Pet()
	{

	}
};

class Fish : public Animal, public Pet
{
public:
	Fish(string name) : Animal(0), Pet()
	{
		this->name = name;
	}
	Fish() : Animal(0), Pet()
	{

	}
	void walk()
	{
		cout << "Fish cannot walk." << endl;
	}
};

int main()
{
	Fish *f = new Fish("Jaws");
	Cat *c = new Cat("Tekir");
	Animal *a = new Fish();
	Animal *e = new Spider();
	Pet *p = new Cat();

	f->play();
	c->play();
	e->eat();
	e->walk();
	a->walk();
	
	return 0;
}
