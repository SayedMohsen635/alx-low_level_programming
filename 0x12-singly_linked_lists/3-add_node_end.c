#include "lists.h"

/**
 * add_node_end - add node at the end of list
 * @head: pointer to pointer to head
 * @str: string
 * Return: size of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !newNode)
		return (NULL);
	if (str)
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	else
		*head = newNode;
	return (newNode);
}
