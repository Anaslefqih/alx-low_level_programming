#include "main.h"

/**
 * puts2 - Prints every other character of a string starting with the first
 * character, followed by a new line.
 * @str: The string to be printed
 */
void puts2(char *str)
{
	int L = 0;

	while (str[L])
	{
		if (L % 2 == 0)
		{
			_putchar(str[L]);
		}
		L++;
	}
	_putchar('\n');
}
