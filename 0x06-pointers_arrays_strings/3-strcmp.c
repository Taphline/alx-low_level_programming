#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strcmp - compares two strings
*@s1: the destination string
*@s2: the string to be copied
*
* Return: Always 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
