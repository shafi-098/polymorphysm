#pragma once
#include<string>
#include <iostream>
using namespace std;
class Person
{
private:
	string name = "ShafiUllah";
	string title = "Engineer";
public:
	virtual void Print() const
	{
		cout << "Name:" << name << "\nTitle:" << title << endl;
	}
};

