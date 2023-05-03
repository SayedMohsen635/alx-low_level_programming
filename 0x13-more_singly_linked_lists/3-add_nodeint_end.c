#include "lists.h"

/**
 * add_nodeint_end - add a node to end of the list
 * @head: pointer to first node
 * @n: value of new node
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	return (newNode);
}
