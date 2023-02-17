#include <stdio.h>
/**
 * main - write alphabet in lowercase
 * Return: 0 (secess)
 */
int main(void)
{
	char Lcase;

	for (Lcase = 'a'; Lcase <= 'z'; Lcase++)
	{
		putchar(Lcase);
	}
	putchar('\n');
	return (0);
}
