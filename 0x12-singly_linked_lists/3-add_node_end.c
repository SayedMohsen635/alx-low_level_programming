#include "lists.h"

/**
 * _strlen - return length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);
	while (*s++)
		n++;
	return (n);
}

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
		newNode->len = _strlen(newNode->str);
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
