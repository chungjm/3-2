#pragma once
#include"Person.h"

class Teacher :public Person
{
private:
	// Teacher 클래스에서 이름을 바꾸면 복잡하기에 부모 클래스 사람에서 변경.
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