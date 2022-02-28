#include "ellipse.h"

ellipse::ellipse()
{
	r = 0;
}
ellipse::ellipse(float input)
{
	r = input;
}
ellipse::ellipse(ellipse(&E))
{
	r = E.r1;
}
void ellipse::setRadius(float input)
{
	r = input;
}
float ellipse::getRadius()
{
	return r;
}
float ellipse::circumference()
{
	return(2.0 * M_PI * r);
}
float ellipse::area()
{
	return(M_PI * r * r)
}