#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(string name)
		:m_name(name) {}
	string getName() { return m_name; }
	virtual void speak()const = 0; // pure virtual func
};

class Dog : public Animal
{
public:
	Dog(string name)
		:Animal(name) {}
	
	virtual void speak()const
	{
		cout << m_name << "woo" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name)
		:Animal(name) {}

	virtual void speak()const
	{
		cout << m_name << "Meow" << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		:Animal(name) {}

};