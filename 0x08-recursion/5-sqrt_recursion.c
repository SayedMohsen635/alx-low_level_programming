#include "main.h"

/**
 * _sqrt_recursion - this function returns the root of a number
 * @n: integer number
 * @value: square root
 * Return: Always 0 (Successful)
 */

int square(int n, int value);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @value: square root
 * Return: int
 */

int square(int n, int value)
{
	if (value * value == n)
	{
		return (value);
	}
	else if (value * value < n)
	{
		return (square(n, value + 1));
	}
	else
	{
		return (-1);
	}
}
