#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char d[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == d[j])
			{
				n[i] = e[j];
			}
		}
	}
	return (n);
}
