#include "main.h"

/**
 * malloc_checked - The function allocates memory
 * @b: integer
 * Return: Void
*/

void *malloc_checked(unsigned int b)
{
	if (b != NULL)
		char *location = malloc(b);
	else
		exit(98);
}
