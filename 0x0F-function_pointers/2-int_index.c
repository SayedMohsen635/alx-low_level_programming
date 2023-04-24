#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: array
 * @size: int
 * @cmp: pointer to a function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int *end = array + size - 1;

	if (array && size && cmp)
	{
		while (array <= end)
			index = cmp(*array++);
	}
	return (index);
}
