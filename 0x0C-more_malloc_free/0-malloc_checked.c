#include "main.h"

/**
 * malloc_checked - The function allocates memory
 * @b: integer
 * Return: Void
*/

void *malloc_checked(unsigned int b)
{
	char *location;

	if (b != 0)
		location = malloc(b);
	else
		exit(98);
}
