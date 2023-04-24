#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: int
 * @argv: array
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (num--)
		printf("%02hhx%s", *p++, num ? " " : "\n");
	return (0);
}
