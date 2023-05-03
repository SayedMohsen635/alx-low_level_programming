#include "lists.h"

/**
 * get_nodeint_at_index - return node at its index
 * @head: pointer to first node
 * @index: index of node
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int num;

	for (node = head, num = 0; node && num < index; node = node->next, num++)
	;
	return (node);
}
