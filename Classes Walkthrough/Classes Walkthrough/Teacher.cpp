#include "Teacher.h"
using namespace std;


Teacher::Teacher(string name) : _name(name) //same thing as student file
{
}


Teacher::~Teacher()
{
}

std::string Teacher::GetName() //can acces the name because its in the same class
{
	return _name;
}
