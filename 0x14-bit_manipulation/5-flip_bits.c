#include "main.h"

/**
 * flip_bits - returns no.of bits to convert a number to another
 * @n: number
 * @m: number
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		if (result & 1ul)
			count++;
		result = result >> 1;
	}
	return (count);
}
