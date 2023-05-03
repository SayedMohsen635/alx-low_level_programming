#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list.
 * @h: pointer to struct
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
