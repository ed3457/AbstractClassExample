// AbstractClassExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
using namespace std;
int main()
{
	Shape* s = new Triangle();

	Shape* ar = new Triangle[10];

	Shape** ar2 = new Shape * [10];

	ar2[0] = new Triangle();

	Triangle t1;

	Triangle t2;

	//Triangle result = t1 + t2;

	Triangle result;

	result.setBase(t1.getBase() + t2.getBase());
	result.setHeight(t1.getHeight() + t2.getHeight());

	if (t1.getBase() == t2.getBase() && t1.getHeight() == t2.getHeight())
	{


	}




	// Shape* s2 = new Shape();// can't make an object of an abstract class 

	//Shape* ar3 = new Shape [10];// can't make an array of objects from an abstract class 
}

