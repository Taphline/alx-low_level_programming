#include "main.h"

/**
* print_rev - print a string reverse
*
*@s: string input
*
*/
void print _rev(char *s)
{
	int i = 0;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
