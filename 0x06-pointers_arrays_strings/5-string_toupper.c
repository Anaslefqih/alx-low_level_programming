#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: string to be changed
 * Return: pointer a
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i]; ++i)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
	return (a);
}
