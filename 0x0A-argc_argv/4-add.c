#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - it adds all positive numbers
 * @argc: int
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum = 0;
	char *i;

	while (--argc)
	{
		for (i = argv[argc]; *i; i++)
		{
			if (*i > '9' || *i < '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
