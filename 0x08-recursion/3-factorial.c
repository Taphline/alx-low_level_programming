#include "main.h"

/**
*factorial - gets a factorial of a number
*@n: Integer
*
*Return: Factorial
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (ERROR);
	}
	else
	{
		if ( n == 0)
			return (1);
		else if ( n == 1)
			return (1);
		return (factorial(n - 1) * n);
	}
}
