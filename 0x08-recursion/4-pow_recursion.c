#include "main.h"

/**
 * _pow_recursion - this function returns the power of a number
 * @x: integer number (value)
 * @y: integer number (power)
 * Return: Always 0 (Successful)
 * Failed: -1
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
