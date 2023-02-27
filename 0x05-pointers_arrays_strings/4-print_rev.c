#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int L = 0;
	int a;

	while (s[L] != '\0')
	{
		L++;
	}
	for (a = L; a > 0; a--)
	{
		_putchar(s[L]);
	}
	_putchar('\n');
}
