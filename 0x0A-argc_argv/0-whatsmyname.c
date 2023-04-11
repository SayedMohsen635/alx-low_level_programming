#include <stdio.h>

/**
 * main - this file prints the program name followed by a new line
 * @argc: integer number
 * @argv: pointer to char
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return(0);
}
