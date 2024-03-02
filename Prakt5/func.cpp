#include "func.h"



int maxNumber(int first, int second)
{
	if (first >= second)
		return first;
	else
		return second;
}

int maxNumber(int first, int second, int third)
{
	if (first >= second && first >= third)
		return first;
	else if (second >= first && second >= third)
		return second;
	else
		return third;
}

float maxNumber(float first, float second)
{
	if (first >= second)
		return first;
	else
		return second;
}

double maxNumber(double first, double second, double third)
{
	if (first >= second && first >= third)
		return first;
	else if (second >= first && second >= third)
		return second;
	else 
		return third;
}
