#include "main.h"

/**
 * binary_to_uint - convert a binary num to unsigned int
 * @b: pointer to string
 * Return: number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		binary = (2 * binary) + (*b++ - '0');
	}
	return (binary);
}
