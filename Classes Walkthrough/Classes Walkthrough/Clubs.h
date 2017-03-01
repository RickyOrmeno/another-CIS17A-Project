#pragma once
#include <string>
#include "Student.h"
class Clubs
{
private:
	std::string _clubName;
	std::string _description;
	Student _students[10];
public:
	Clubs(std::string name, std::string description, Student student);
	~Clubs();
};

