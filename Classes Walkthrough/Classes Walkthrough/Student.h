#pragma once
#include <string>

class Student
{
private:
	std::string _name;			//do this instead of "using namespace std" in header files

public:
	Student();
	Student(std::string name);
	~Student();

	std::string GetName();
};

