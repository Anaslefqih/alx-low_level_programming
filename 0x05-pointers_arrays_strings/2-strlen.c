#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 * Return: the string's length.
 */

int _strlen(char *s)
{
	int L = 0;

	while (s[L])
	{
		++L;
	}
	return (L);
}
