#include "main.h"
#include <stdio.h>
#include <string.h>

/*
*_strpbrk - searches a string for any of a set of bytes.
*@s: string
*@accept: character
*
*Return: new string
*/
char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = strpbrk(s, accept);
	return (p);
}
