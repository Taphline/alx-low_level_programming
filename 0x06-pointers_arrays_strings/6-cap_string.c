#include "main.h"
/**
*cap_string - capitalizes all words of a string
*@n: pointer char
*
*Return: pointer
*/
char *cap_string(char *n)
{
	int count = 0, i;
	int sep_wordn[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(n + count) >= 97 && *(n + count) <= 122)
		*(n + count) = *(n + count) - 32;
	count++;
	while (*(n + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(n + count) == sep_wordn[i])
			{
				if ((*(n + (count + 1)) >= 97) && (*(n + (count + 1)) <= 122))
					*(n + (count + 1)) = *(n + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (n);
}
