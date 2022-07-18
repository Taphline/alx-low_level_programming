#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - main function.
 * @s: Pointer to the string to search
 * @accept: Pointer to set of bytes to find
 *
 * Description: This function searches a string for any of a set of bytes.
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
