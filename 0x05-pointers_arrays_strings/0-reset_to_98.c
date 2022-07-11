#include "main.h"

/**
* reset_to_98-converts a pointer to an integer
* @n:integer
*
* Return: Always 0.
*/
void reset_to_98(int *n)
{
	n = (int *)n;
	*n = 98;
}
