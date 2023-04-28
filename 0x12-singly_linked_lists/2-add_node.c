#include "lists.h"

/**
 * add_node - add a node at beginning of list
 * @head: pointer to pointer to head
 * @str: string
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead = malloc(sizeof(list_t));

	if (!head || !newHead)
		return (NULL);
	if (str)
	{
		newHead->str = strdup(str);
		if (!newHead->str)
		{
			free(newHead);
			return (NULL);
		}
		newHead->len = _strlen(newHead->str);
	}
	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
