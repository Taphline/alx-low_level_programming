#include "main.h"
/**
*_sqrt_recursion - returns natural square root of a number
*@n: Integer number
*Return: Square root
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (getNumSqr(n, 1));
}
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
		return (getNumSqr(num, i + 1));
	else
		return (-1);
}
