#include "lists.h"

/**
 * find_listint_loop_fl - finds a loop in list
 * @head: list
 * Return: address of node
 */

listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a list
 * @h: head of list
 * Return: number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopNode;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);
	loopNode = find_listint_loop_fl(*h);
	for (len = 0; (*h != loopNode || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loopNode && loop)
		{
			if (loopNode == loopNode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}

size_t
