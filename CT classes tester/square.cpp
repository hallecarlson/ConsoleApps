#include "square.h"

//CLASSES
//CT - Classes Q1
square::square()
{
	s = 0;
}
square::square(float side)
{
	s = side;
}
square::square(square(&S))
{
	s = S.s;
}
void square::setDimensions(float side) //this is a method and must have the same name as the class
{
	s = side;
}
float square::getS()
{
	return s;
}
float square::perimiter()
{
	return(4 * s);
}
float square::area()
{
	return (s * s);
}