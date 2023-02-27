#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len])
		len++;

	i = if (len % 2 == 0)
	{
		len / 2;
	}
	else
	{
		(len + 1) / 2;
	}

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
