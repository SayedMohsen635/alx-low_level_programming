#include "main.h"

/**
 * malloc_checked - The function allocates memory
 * @b: integer
 * Return: Pointer to an array or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *location = malloc(b);

	if (location != 0)
		return (location);

	exit(98);
}
