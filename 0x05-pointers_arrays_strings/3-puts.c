#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _puts - prints a string to stdout
* @str:input string
*
* Return: Always 0
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
