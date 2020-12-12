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

	while (h->next != NULL)
	{

		if (h->n == '\0')
			printf("(nil)\n");
		else
			printf("%d\n", h->n);
			h = h->next;
			++count;
	}

	return (count);
}
