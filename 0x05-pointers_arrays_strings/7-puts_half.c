#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[ln])
	{
		ln++;
	}
	if (ln % 2 == 0)
	{
		i = ln / 2;
	}
	else
	{
		i = (ln + 1) / 2;
	}
	while (str[i])
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
