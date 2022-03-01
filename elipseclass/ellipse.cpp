#include "ellipse.h"

ellipse::ellipse()
{
	r1 = 0;
	r2 = 0;
}
ellipse::ellipse(float rad1, float rad2)
{
	r1 = rad1;
	r2 = rad2;
}
ellipse::ellipse(ellipse(&E))
{
	r1 = E.r1;
	r2 = E.r2;
}
void ellipse::setRadii(float rad1, float rad2)	//a method; must have same name as class
{
	r1 = rad1;
	r2 = rad2;
}
float ellipse::getR1()
{
	return r1;
}
float ellipse::getR2()
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