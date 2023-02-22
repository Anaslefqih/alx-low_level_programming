#include <stdio.h>

/**
 * main - print the sun of all multiples of 3 or 5 up to 1024
 * Return: 0
 */

int main(void)
{
	int i, x = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x += i;
		}
		i++;
	}
	printf("%d\n", x);
	return (0);
}
