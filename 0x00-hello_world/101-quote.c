#include <stdio>
#include <unistd.h>

/**
*main - Entry point
*
*Return: Always  (success)
*/
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = strlen(str);
	/* Starting main */
	fwrite(str, len, 1, stderr);
	return (1);
}
