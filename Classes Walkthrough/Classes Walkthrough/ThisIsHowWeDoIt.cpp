#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Teacher james = Teacher("James");
	Teacher bob = Teacher("bob");
	cout << james.GetName() << bob.GetName() << endl;

	getchar();
	return 0;
}