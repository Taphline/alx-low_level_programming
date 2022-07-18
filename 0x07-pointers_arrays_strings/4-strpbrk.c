#include "main.h"
#include <stdio.h>
#include <string.h>

/*
*_strpbrk -compares two string till finds the first alike character
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
