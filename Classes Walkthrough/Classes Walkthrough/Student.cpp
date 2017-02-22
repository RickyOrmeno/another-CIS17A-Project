#include "Student.h"

using namespace std;

Student::Student()			//Default Constructor :: constructor overloading
{			
	_name = "Null";
}

Student::Student(string name)
{
	_name = name;
}


Student::~Student()
{
}

std::string Student::GetName()
{
	return _name;
}
