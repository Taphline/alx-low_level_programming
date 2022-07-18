#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strchr - locates a character in a string
*@s:string pointer
*@c:character
*
*Return: string s
*/
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	return (p);
}
