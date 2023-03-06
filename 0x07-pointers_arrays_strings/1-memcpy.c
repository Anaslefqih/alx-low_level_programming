#include "main.h"

/**
 * _memcpy - copies from memory area src to memory area dest
 * @dest: the destination array where the content is to be copied
 * @src: the source of data to be copied
 * @n: number of bytes to copy
 * Return: the destination char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (!dest || !src)
		return (NULL);

	while (n--)
		*(dest + n) = *(src + n);

	return (dest);
}
