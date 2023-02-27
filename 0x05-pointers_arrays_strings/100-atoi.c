#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be  converted
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int i = 1;

	while (*s)
	{
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
		s++;
	}
	return (n * i);
}
