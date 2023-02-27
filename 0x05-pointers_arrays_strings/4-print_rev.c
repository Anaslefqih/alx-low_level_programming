#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int L = 0;

	while (s[L] != '\0')
	{
		L++;
	}
	for (L; L > 0; L--)
	{
		_putchar(s[L]);
	}
	_putchar('\n')
}
