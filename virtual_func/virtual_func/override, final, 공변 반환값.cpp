#include <iostream>
using namespace std;

class A
{
public:
	void print() { cout << "A" << endl; }
	virtual A* getThis() {
		cout << "A::getThis()" << endl;
		return this;
	}
};

class B : public A
{
public:
	void print() { cout << "B" << endl; }
	virtual B* getThis() {
		cout << "B::getThis()" << endl;
		return this;
	}

};

//class C : public B
//{
//public:
//	void print()  { cout << "C" << endl; }
//};


int main()
{
	A a;
	B b;
	//C c;

	A& ref = b;
	b.getThis()->print();
	ref.getThis()->print();

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;

	return 0;
}
/*
오버로딩

1. 메소드 이름이 같아야 한다.

2. 리턴형이 같아도 되고 달라도 된다.

3. 파라미터 개수가 달라야한다.

4. 파라미터 개수가 같을 경우, 자료형이 달라야 한다.
​

같은 이름의 메소드를 여러개 중복 선언하는 것

​
오버라이딩

1. 오버라이드 하고자 하는 메소드가 상위 클래스에 존재해야한다.

2. 메소드 이름이 같아야 한다.

3. 메소드 파라미터 개수, 파라미터의 자료형이 같아야 한다.

4. 메소드 리턴형이 같아야 한다.

5. 상위 메소드와 동일하거나 내용이 추가되어야 한다.


오버로딩은 함수의 중복 정의, 오버라이딩은 함수의 재정의; 자식클래스가 함수 재정의할 수 있게 허용한다.
*/