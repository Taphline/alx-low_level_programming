#include "main.h"
#include <stdio.h>

/**
*_memset -fills memory with a constant byte
*@s:character pointer
*@b:character constant
*@n:unsigned int
*
*Return: character pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	int size = n, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
