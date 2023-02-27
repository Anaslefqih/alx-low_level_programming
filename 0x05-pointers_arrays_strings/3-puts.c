#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 *
 * @str : The string to be printed.
 */
void _puts(char *str)
{
	int L = 0;

	while (str[L])
	{
		_putchar(str[L++]);
	}
	_putchar('\n');
}
