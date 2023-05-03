#include "lists.h"

/**
 * sum_listint - sums all lists' values
 * @head: pointer to first node
 * Return: int value
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
