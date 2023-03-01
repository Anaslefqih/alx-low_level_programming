include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i, j;
	char *dec = "aAeEoOtTlL";
	char *enc = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; dec[j]; j++)
			if (str[i] == dec[j])
				str[i] = enc[j];
	}

	return (str);
}
