#include "Clubs.h"
#include <string>

using namespace std;

Clubs::Clubs(string name, string description, Student student)
{
	_clubName = name;
	_description = description;
	_students[10]= Student;				//ASK???

}


Clubs::~Clubs()
{
}
