#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*string_toupper -converts string to uppercase
*@ch: pointer to char
*
*Return: Always 0
*/
char *string_toupper(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	{
		if (*(ch + i) >= 97 && *(ch + i) <= 122)
			*(ch + i) = *(ch + i) - ' ';
		i++;
	}
	return (ch);
}
