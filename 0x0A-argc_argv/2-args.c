#include <stdio.h>
#include "main.h"
/**
* main - prints all arguments it receives
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
		return (printf("Error\n"), 1);
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
