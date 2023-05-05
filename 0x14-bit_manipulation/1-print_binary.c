#include "main.h"

/**
 * print_binary - prints the binary number
 * @n: binary number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int b = 8 * sizeof(n);
	int printed = 0;

	while (b)
	{
		if (n & (1L << --b))
		{
			_putchar('1');
			printed++;
		}
		else
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
