#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints all possible different
 * combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b;
	int c;
	int a1;
	int b1;
	int c1;

	while (a <= 98)
	{
		b = (a / 10 + '0');
		c = (a % 10 + '0');
		a1 = 0;
		while (a1 <= 99)
		{
			b1 = (a1 / 10 + '0');
			c1 = (a1 % 10 + '0');
			if (a < a1)
			{
				putchar(b);
				putchar(c);
				putchar(' ');
				putchar(b1);
				putchar(c1);
				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a1++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
