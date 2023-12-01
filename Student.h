#pragma once
#include "Person.h"
using namespace std;
class Student :
    public Person
{
private:
    float Gpa=3.8;
public:
   // virtual
        void Print()const override
    {
        Person::Print();
        cout << "This student has a GPA of:" << Gpa << endl;
    }

};

