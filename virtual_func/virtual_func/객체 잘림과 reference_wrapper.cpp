#include <iostream>
#include <vector>
#include <functional> // ﻿reference_wrapper 용

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base& b)
{
	b.print();
}

int main()
{
	Derived d;
	// I'm derived
	Base& b = d;

	b.print();
	// I'm base
	Base b = d;

	b.print();

	return 0;
}

