include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *n)
{
	int i, j;
	char dec[] = "aAeEoOtTlL";
	char enc[] = "4433007711";

	for (i = 0; n[i]; i++)
	{
		for (j = 0; dec[j]; j++)
			if (n[i] == dec[j])
				n[i] = enc[j];
	}

	return (n);
}
