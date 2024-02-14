#pragma once
#include "Shape.h"
class Triangle:public Shape
{
private:
	float base;
	float height; 

public:

	float calcArea();

	void setBase(float b);
	float getBase();

	void setHeight(float h);
	float getHeight();

};

