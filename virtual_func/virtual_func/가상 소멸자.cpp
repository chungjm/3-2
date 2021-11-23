#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_array; //메모리 동적할당

public:
	Derived(int length)
	{
		m_array = new int[length]; // 생성자에서 동적할당
	}

	virtual ~Derived() override //소멸자 
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	// Derived derived(5);
	Derived* derived = new Derived(5);
	Base* base = derived;
	// 즉 base의 소멸자만 호출되었다는 것으로 derived 클래스의 소멸자가 호출이 되지 않아 메모리 누수가 발생한다.
	delete base;
	return 0;
}

