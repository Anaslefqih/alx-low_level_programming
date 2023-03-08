#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: input
 * Return:  0 (Success)
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
