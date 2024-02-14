#pragma once
#include <string>
using namespace std; 
class Shape // this will be an abstract class 
{
private:
	string name; 

public:

	virtual float calcArea()=0;// Pure virtual function 

	void setName(string n);

	string getName();
};

