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
	int index = 0;

	if (array && size && cmp)
	{
		while (index < size)
		{
			if (cmp(array[index]))
				return (index);
			index++;
		}
	}
	return (-1);
}
