#include "ellipse.h"

ellipse::ellipse()
{
	r1 = 0;
	r2 = 0;
}
ellipse::ellipse(float input1, float input2)
{
	r1 = input1;
	r2 = input2;
}
ellipse::ellipse(ellipse(&E))
{
	r1 = E.r1;
	r2 = E.r2;
}
void ellipse::setRadius(float input1, float input2)
{
	r1 = input1;
	r2 = input2;
}
float ellipse::getRadius1()
{
	return r1;
}
float ellipse::getRadius2()
{
	return r2;
}
float ellipse::circumference()
{	
	return(2 * M_PI * sqrt(r1 * r2));
}
float ellipse::area()
{
	return(M_PI * r1 * r2);
}