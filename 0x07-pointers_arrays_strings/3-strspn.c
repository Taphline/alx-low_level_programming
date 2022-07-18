#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strspn -a function that returns the number of bytes
*@s:string
*@accept:string
*
*Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	int p;

	p = strspn(s, accept);
	return (p);
}

