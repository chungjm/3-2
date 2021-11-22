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
	// ���� ó���� �ص� �ڽ�Ŭ���������� ��� �Ұ�
	void print() = delete;
};

int main()
{
	Base base(5);
	base.print();

	Derived derived(7);
	// �ڽ�Ŭ�������� ���� �Ұ� 
	// derived.print();
	// cout << base << " " << derived << endl;
}
