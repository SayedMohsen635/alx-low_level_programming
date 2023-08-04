#include <stdio.h>
#include <stdlib.h>

/**
 * main - it multiplies two numbers
 * @argc: int
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", result);
	return (0);
}
