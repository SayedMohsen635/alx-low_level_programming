#include "main.h"

/**
 * _abs - The function computes the absolute value of an integer
 * @n: integer number
 * Return: integer number
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
