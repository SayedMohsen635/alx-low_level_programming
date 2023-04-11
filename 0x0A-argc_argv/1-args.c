#include <stdio.h>

/**
 * main - this file prints number of args passed into it
 * @argc: int
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char **argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
