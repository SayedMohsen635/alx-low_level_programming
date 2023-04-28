#include "lists.h"

/**
 * print_list - print elements of the list
 * @h: pointer to a struct
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
