#include "righttriangle.h"

righttriangle::righttriangle()
{
	b = 0;
	h = 0;
}
righttriangle::righttriangle(float base, float height)
{
	b = base;
	h = height;
}
righttriangle::righttriangle(righttriangle(&T))
{
	b = T.b;
	h = T.h;
}
void righttriangle::setDimensions(float height, float base)
{
	b = base;
	h = height;
}
float righttriangle::getB()
{
	return b;
}
float righttriangle::getH()
{
	return h;
}
float righttriangle::perimeter()
{
	return (b + h + sqrt((b * b) + (h * h)));
}
float righttriangle::area()
{
	return ((b * h) / 2.0);
}

