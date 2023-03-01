#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: pointer to string
 */
char *rot13(char *s)
{
	int i, j;
	char *d1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *d2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; d1[j]; j++)
		{
			if (s[i] == d1[j])
			{
				s[i] = d2[j];
				break;
			}
		}
	}

	return (s);
}
