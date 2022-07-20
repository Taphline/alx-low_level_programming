#include "main.h"

/**
*getNumSqr - function taht gets the number of sqroot
*@num:Input value
*@i: Counter variable
*Return:int
*/
int getNumSqr(int num, int i)
{
	if (num == (i * i))
		return (i);
	else if (num > (i * i))
		return (i);

	return (getNumSqr(num, i + 1));
}

/**
*_sqrt_recursion - call @ getNumSqr function
*@n: integer
*
*Return: root -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (getNumSqr(2, n, n);
}
