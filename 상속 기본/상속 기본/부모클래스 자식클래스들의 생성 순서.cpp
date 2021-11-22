#include <iostream>
using namespace std;

class Mother
{
	//private
protected:
	int m_i;

public:
	Mother()
		:m_i(1)
	{
		cout << "Mother constructor" << endl;
	}
	void setValue(const int& i_in)
	{
		m_i = i_in;
	}
	int getValue()
	{
		return m_i;
	}
};

class Child : public Mother
{
private:
	double m_d;
public:
	Child()
		:m_d(1.0)
	{
		cout << "Child constructor" << endl;
		m_i = 1024;
		/*Mother::setValue(i_in);
		m_d = d_in;*/
	}
	void setValue(const int& i_in, const double& d_in)
	{
		Mother::setValue(i_in); // setValue override
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}

};

int main()
{
	Mother mother;
	Child child;

}