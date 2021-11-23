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
	int* m_array; //�޸� �����Ҵ�

public:
	Derived(int length)
	{
		m_array = new int[length]; // �����ڿ��� �����Ҵ�
	}

	virtual ~Derived() override //�Ҹ��� 
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
	// �� base�� �Ҹ��ڸ� ȣ��Ǿ��ٴ� ������ derived Ŭ������ �Ҹ��ڰ� ȣ���� ���� �ʾ� �޸� ������ �߻��Ѵ�.
	delete base;
	return 0;
}

