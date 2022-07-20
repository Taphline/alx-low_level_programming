#include "main.h"

/**
*_strlen_recursion - returns length of a string
*@s:pointer string
*
*Return: string length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (NULL);
	s++;
	return (1 + _strlen_recursion(s));
}
