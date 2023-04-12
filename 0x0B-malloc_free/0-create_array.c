#include "main.h"

/**
 * create_array - The function creates an array of chars,
 * and initializes it with a specific char
 * @size: array's size
 * @c: character
 * Return: int
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
