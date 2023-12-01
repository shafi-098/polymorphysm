#include<iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
int main()
{
	Person p1;
	//p1.Print();
	Student s1;
	s1.Print();
	return 0;
}
//Question:
//what does labling a function virtual means?
//Answer:
//The class "Person" is inviting any of its future decendents to redefine this function with a more suitable implementation.