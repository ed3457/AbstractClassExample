#include "Triangle.h"

float Triangle::calcArea()
{
    return 0.5 * getBase() * getHeight();
}

void Triangle::setBase(float b)
{
    base = b;
}

float Triangle::getBase()
{
    return base;
}

void Triangle::setHeight(float h)
{
    height = h;
}

float Triangle::getHeight()
{
    return height;
}
