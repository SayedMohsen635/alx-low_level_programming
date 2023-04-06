#include "main.h"

/**
 * factorial - this function returns the factorial of a number
 * @n: integer number
 * Return: Always 0 (Successful)
 * Failed: -1
 */

int factorial (int n)
{
	return n * factorial(n - 1);
}
