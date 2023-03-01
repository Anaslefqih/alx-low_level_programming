#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < n - 1)
	{
		i++;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
