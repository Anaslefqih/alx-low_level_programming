#include "main.h"

/**
 * rev_string - Reverses a string
 * @s : The string to be reversed
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char rev;

	while (s[a])
	{
		a++;
	}
	while (a > b)
	{
		rev = s[--a];
		s[a] = s[b];
		s[b++] = rev;
	}
}
