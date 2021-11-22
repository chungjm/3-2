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

};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		:Base(value) {}

	using Base::m_i;
private:
	using Base::print;
	// 위에 처럼만 해도 자식클래스에서는 사용 불가
	void print() = delete;
};

int main()
{
	Base base(5);
	base.print();

	Derived derived(7);
	// 자식클래스에서 접근 불가 
	// derived.print();
	// cout << base << " " << derived << endl;
}
