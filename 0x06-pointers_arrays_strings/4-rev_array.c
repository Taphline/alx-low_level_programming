#include "main.h"

/**
*reverse_array -  a function that reverses the content of an array of integers.
*@a: pointer to the array
*@n: number of elements in the array
*
*Return: void
*/
void reverse_array(int *a, int n)
{
	int b, c, temp;

	for (c = 0, b = n - 1; c < b; b--, c++)
	{
		temp = *(a + c);
		*(a + c) = *(a + b);
		*(a + b) = temp;
	}
}
