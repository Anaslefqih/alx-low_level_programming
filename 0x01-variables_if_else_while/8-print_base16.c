#include <stdio.h>
/**
 * main - print num in base 16
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	char alp;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
