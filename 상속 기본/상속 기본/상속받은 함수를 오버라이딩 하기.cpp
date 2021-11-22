#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		:m_i(value) {}
	
	void print()
	{
		cout << "Base" << endl;
	}
	friend ostream& operator << (ostream& out, const Base& b)
	{
		out << "This is base output" << endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		:Base(value) {}
	
	void print()
	{
		cout << "Derived" << endl;
	}
	friend ostream& operator << (ostream& out, const Derived& d)
	{
		cout << static_cast<Base>(d);
		out << "This is Derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(5);
	base.print();

	Derived derived(7);
	derived.print();
	cout << base << " " << derived << endl;
}
