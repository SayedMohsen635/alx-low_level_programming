#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to first node
 * @index: index
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prevNode;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prevNode->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prevNode = node;
		node = node->next;
	}
	return (-1);
}
