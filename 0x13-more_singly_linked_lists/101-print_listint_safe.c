#include "lists.h"

/**
 * reall - reallocates the memory for an array of pointers
 * to nodes of a list
 * @list: old list
 * @size: size of new list
 * @new: new node
 * Return: pointer to new list
 */

const listint_t **reall(const listint_t **list
, size_t size, const listint_t *new)
{
	const listint_t **newList;
	size_t i;

	newList = malloc(size * sizeof(listint_t *));
	if (newList == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newList[i] = list[i];
	newList[i] = new;
	free(list);
	return (newList);
}

/**
 * print_listint_safe - prints a linkedlist
 * @head: pointer to node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = reall(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
