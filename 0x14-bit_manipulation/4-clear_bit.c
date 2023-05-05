#include "main.h"

/**
 * clear_bit - clears the value of the specified bit
 * @n: pointer to unsigned long int
 * @index: index of the bit
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n &= ~(1L << index);
	return (1);
}