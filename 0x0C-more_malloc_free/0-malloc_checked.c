#include "main.h"

/**
 * malloc_checked - The function allocates memory
 * @b: integer
 * Return: Void
*/

void *malloc_checked(unsigned int b)
{
	int *location = malloc(b);

	if (b != 0)
		return (location);
	exit(98);
}
