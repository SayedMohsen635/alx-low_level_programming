#include "main.h"

/**
 * print_sign - The function prints the sign of a number
 * @n: Integer number
 * Return: 1 or 0 or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		printf("%d", 0);
		return (0);
	}
}
