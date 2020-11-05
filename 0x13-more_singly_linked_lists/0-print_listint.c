#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t
 *
 * @h: list struct
 *
 * Return: NUMBER of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *index;
	int listlen = 0;

	index = h;

	while (index)
	{
		++listlen;
		printf("%d\n", index->n);
		index = index->next;
	}

	return (listlen);
}
