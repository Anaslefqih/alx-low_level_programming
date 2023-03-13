#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dp;
	int i, ln;

	if (!str)
		return (NULL);

	for (ln = 0; str[ln]; ln++)
		;

	dp = malloc(sizeof(char) * (ln + 1));
	if (!dp)
		return (NULL);

	for (i = 0; i < ln; i++)
		dp[i] = str[i];
	dp[i] = '\0';

	return (dp);
}
