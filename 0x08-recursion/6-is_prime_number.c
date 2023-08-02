#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - this function returns the number is prime or not
 * @n: integer number
 * @othern: integer number
 * Return: 1 or 0
 */

int check_prime(int n, int othern);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all numbers < n if they can divide it
 * @n: integer number
 * @othern: integer number
 * Return: integer number
 */

int check_prime(int n, int othern)
{
	if (othern >= n && n > 1)
	{
		return (1);
	}
	else if (n % othern == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, othern + 1));
	}
}
