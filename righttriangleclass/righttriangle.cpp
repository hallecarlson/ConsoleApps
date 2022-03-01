#include "righttriangle.h"

righttriangle::righttriangle()
{
	b = 0;
	h = 0;
	hyp = 0;
}
righttriangle::righttriangle(float base, float height)
{
	b = base;
	h = height;
	hyp = hypotenuse;
}
righttriangle::righttriangle(righttriangle(&T))
{
	b = T.b;
	h = T.h;
	hyp = T.hyp;
}
void righttriangle::setDimensions(float height, float base)
{
	b = base;
	h = height;
	hyp = hypotenuse;
}
float righttriangle::getB()
{
	return b;
}
float righttriangle::getH()
{
	return h;
}
float righttriangle::getHYP()
{
	return hyp;
}
/*float righttriangle::hypotenuse()
{
	return (sqrt((b * b) + (h * h)));
}*/
float righttriangle::perimeter()
{
	return (b + h + hyp);
}
float righttriangle::area()
{
	return ((b * h) / 2);
}

