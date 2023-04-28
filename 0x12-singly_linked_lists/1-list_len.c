#include "lists.h"

/**
 * list_len - this function returns the number of elements
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
