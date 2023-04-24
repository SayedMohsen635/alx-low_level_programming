#include "3-calc.h"

/**
 * main - runs the program
 * @argc: number of args
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*opFunc)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	opFunc = get_op_func(argv[2]);
	if (!opFunc)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", opFunc(a, b));
	return (0);
}
