#include <stdio.h>

/**
* main - program Entry point
*
* Return: 0 indicates success
*/

int main(void)
{
	char alphabet;
	/* Program */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
