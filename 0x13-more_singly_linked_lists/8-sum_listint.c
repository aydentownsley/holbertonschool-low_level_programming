#include "lists.h"

/**
 * sum_listint - returns sum of data in all nodes of list
 *
 * @head: head of list
 *
 * Return: SUM of data in nodes
 * OR 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);

	while (current)
	{
		if (current->n)
			sum += current->n;
		current = current->next;
	}

	return (sum);
}
