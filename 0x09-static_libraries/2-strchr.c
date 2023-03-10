#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}





