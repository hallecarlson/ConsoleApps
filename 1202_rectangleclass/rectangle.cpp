#include "rectangle.h"

rectangle::rectangle()
{
	l = 0;
	w = 0;
}
rectangle::rectangle(float length, float width)
{
	l = length;
	w = width;
}
rectangle::rectangle(rectangle(&R))
{
	l = R.l;
	w = R.w;
}
void rectangle::setDimensions(float length, float width)	//a method; must have same name as class
{
	l = length;
	w = width;
}
float rectangle::getL()
{
	return l;
}
float rectangle::getW()
{
	return w;
} 
float rectangle::perimeter()
{	
	return(2 * (l + w));
}
float rectangle::area()
{
	return(l * w);
}

