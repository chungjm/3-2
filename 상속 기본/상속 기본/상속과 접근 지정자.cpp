#include <iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : public Base
{
public:
	Derived()
	{
		m_public = 123;
		m_protected = 123;
		// m_private = 123;
	}
};

int main()
{
	Derived derived;
	// protected로 상속받을 경우, 더 엄격하기 때문에 public 멤버변수에도 접근 x
	derived.m_public = 234;
	// derived.m_protected = 234;
	// derived.m_private = 234;
}