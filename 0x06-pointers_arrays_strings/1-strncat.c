#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* char *_strncat - function that concatenates two strings.
* @dest: character destination
* @src: source to appended
* @n: integer
*Return: Always 0
*/
char *_strncat(char *dest, char *src, int n)
{
	char *p;

	strncat(dest, src, n);
	p = (dest);

	return (p);
}
