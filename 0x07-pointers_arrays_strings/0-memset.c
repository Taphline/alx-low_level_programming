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
	int i = 0

	if (size > 0)
	{
		for (i =0; i < size; i++)
		{
			*(s + i) = b
			i += 1;
		}
	}
	return (s);
} 
