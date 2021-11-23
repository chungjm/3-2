#include <iostream>

using namespace std;

class PorweredDevice
{
public:
	int m_i;

	PorweredDevice(int power)
	{
		cout << "PoweredDevice: " << power << "\n";
	}
};

class Scanner : virtual public PorweredDevice
{
public:
	Scanner(int scanner, int power)
		:PorweredDevice(power)
	{
		cout << "Scanner: " << scanner << "\n";
	}
};

class Printer : virtual public PorweredDevice
{
public:
	Printer(int printer, int power)
		: PorweredDevice(power)
	{
		cout << "Printer: " << printer << "\n";
	}
};

class Copier : public Scanner, public Printer
{
public:
	Copier(int scanner, int printer, int power)
		: Scanner(scanner, power), Printer(printer, power)
	{}

};

int main()
{
	Copier cop(1, 2, 3); //생성자 호출

	cout << &cop.Scanner::PorweredDevice::m_i << endl;
	cout << &cop.Printer::PorweredDevice::m_i << endl;

	return 0;
}

