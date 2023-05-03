#include "lists.h"

/**
 * pop_listint - pops the head node of a list
 * @head: pointer to first node
 * Return: int value
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
