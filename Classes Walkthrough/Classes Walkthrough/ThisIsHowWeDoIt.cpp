#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

using namespace std;

int main()
{
	Teacher james = Teacher("james");
	Course cis17 = Course("CIS17A", "Programming C++", james);
	Student bob = Student("bob");
	Student jane = Student("jane");

	//cis17.EnrollStudent(bob, 0);
	//cis17.EnrollStudent(jane, 1);

	for (int i = 0; i < 3; i++)
	{
		auto student = Student("Test");
	}
	cout << cis17.GetClassInfo() << endl;

	getchar();
	return 0;
}