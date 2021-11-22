#include"Studnet.h"
#include"Teacher.h"
using namespace std;



int main()
{
	Student std1("John");
	std1.setName("Jane");
	std1.getName();
	cout << std1.getName() << endl;

	Teacher teacher("Dr.H");
	teacher.setName("Dr.K");
	cout << teacher.getName() << endl;

	cout << std1 << std::endl;
	cout << teacher << std::endl;

	std1.study();
	teacher.teach();
}

ostream& operator << (ostream& outStream, const Teacher& teacher)
{
	outStream << teacher.getName();
	return outStream;
}

ostream& operator <<(std::ostream& outStream, const Student& student)
{
	outStream << student.getName() << " " << student.m_intel << " ";
	return outStream;
}
