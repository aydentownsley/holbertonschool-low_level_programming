#include "lists.h"

/**
 * print_dlistint - prints the values of the doubly linked list
 *
 * @h: pointer to the head of a doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		++count;
	}

	return (count);
}
