#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: the sequence of characters to match
 * Return: the beginning of the located substring, or NULL if the
*/
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b] && haystack[a + b]; b++)
			if (haystack[a + b] != needle[b])
				break;
		if (!needle[b])
			return (haystack + a);
	}
	return (NULL);
}
