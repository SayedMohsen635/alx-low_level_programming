#include <stdio.h>

/**
 * main - it prints all args it receives
 * @argc: int
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
