#pragma once
#include"Person.h"

class Teacher :public Person
{
private:
	// Teacher Ŭ�������� �̸��� �ٲٸ� �����ϱ⿡ �θ� Ŭ���� ������� ����.
	// std::string name; 
public:
	Teacher(const std::string& name_in = "No name")
		:Person(name_in)
	{
		this->getName();
	}

	void teach()
	{
		std::cout << getName() << " is teaching " << std::endl;
	}

	friend std::ostream& operator << (std::ostream& outStream, const Teacher& teacher);
};