#include "main.h"

/**
 * print_last_digit - The function prints the last digit of a number
 * @n: Integer number
 * Return: Integer number
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		printf("%d", (-1 * (n % 10)));
		return (-1 * (n % 10));
	}
	else
	{
		printf("%d", (n % 10));
		return (n % 10);
	}
}
