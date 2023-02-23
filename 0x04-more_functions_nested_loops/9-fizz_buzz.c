#include <stdio.h>

/**
 * main - prints Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz
 * for multiples of both 3 and 5. Otherwise, prints the number.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
