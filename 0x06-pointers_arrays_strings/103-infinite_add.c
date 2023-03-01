#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev - reverses a string
 * @s: string to reverse
 * Return: pointer to the reversed string
 */
char *rev(char *s)
{
	size_t L = strlen(s);
	size_t i;

	for (i = 0; i < L / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[L - 1 - i];
		s[L - 1 - i] = tmp;
	}
	return (s);
}

/**
 * infinite_add - adds 2 numbers
 * @n1: The first positive num
 * @n2: The second positive num
 * @r: The buffer that the function will use to store the result
 * @size_r: The buffer size
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int L1 = strlen(n1);
	int L2 = strlen(n2);

	char *tmp = malloc(sizeof(char) * (L1 + L2 + 1));
	int i, j, k, sum, cry = 0;

	for (i = L1 - 1, j = L2 - 1, k = 0;
		i >= 0 || j >= 0 || cry;
		i--, j--, k++)
	{
		sum = cry;
		sum += (i >= 0) ? n1[i] - '0' : 0;
		sum += (j >= 0) ? n2[j] - '0' : 0;
		tmp[k] = sum % 10 + '0';
		cry = sum / 10;
	}
	if (k == 0)
		return (0);
	tmp[k] = '\0';
	if ((int)strlen(tmp) + 1 > size_r)
		return (0);
	r = strcpy(r, tmp);
	free(tmp);
	return (rev(r));
}
