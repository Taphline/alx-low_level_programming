#include "main.h"
#include <string.h>

/**
* char *_strcat -function that concatenates two strings.
* @dest: the destination of the string
* @src: the string to be appended
*
* Return: Always 0
*/
char *_strcat(char *dest, char *src)
{
	char *p;

	strcat(dest, src);
	p = dest;

	return (p);
}
