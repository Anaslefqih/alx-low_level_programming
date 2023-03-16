#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (!nmemb || !size)
	{
		return (NULL);
	}
	char *result = malloc(nmemb * size);

	if (result == NULL)
	{
		return (NULL);
	}
	memset(result, 0, nmemb * size);
	return (result);
}
