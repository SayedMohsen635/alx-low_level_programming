#include "lists.h"

/**
 * free_list - frees nodes on a list
 * @head: pointer to a head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *nextNode;

	if (!head)
		return;

	node = head;
	while (node)
	{
		nextNode = node->next;
		free(node->str);
		free(node);
		node = nextNode;
	}
}
