#include "main.h"

/**
 * get_bit - returns value of a bit
 * @n: binary number
 * @index: index of the bit
 * Return: the index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
