#include "main.h"

/**
*_pow_recursion - returns power of a number
*@x: Integer number
*@y: Integer number
*
*Return: power of a number
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (ERROR);
	}
	else
	{
		if (y > 0)
			return (x * ( _pow_recursion(x, y - 1)));
		else
			return (1);
	}
}
