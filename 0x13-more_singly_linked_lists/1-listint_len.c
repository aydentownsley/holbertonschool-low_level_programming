#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: head of linked list
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *index;
	int listlen = 0;

	index = h;

	while (index)
	{
		++listlen;
		index = index->next;
	}

	return (listlen);
}
