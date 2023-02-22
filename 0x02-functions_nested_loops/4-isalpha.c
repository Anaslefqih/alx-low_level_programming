#include "main.h"

/**
 * _isalpha - check for alphabitic character
 * @c: The character to  be detected
 * Return: 1 for alphabitic character or 0 for else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
