#include "main.h"
#include <stdio.h>
#include <string.>

/**
* char *_strncpy - function that copies a string.
* @dest: destination string
* @src: source to be appended
* @n: the number to be copied from the string source
* Return: Always 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *d;

	strncpy(dest, src, n);
	d = (dest);

	return (d);
}
