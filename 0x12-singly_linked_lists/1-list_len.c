#include "lists.h"

/**
 * list_len - returns the number of elements in a singly linked list
 *
 * @h: head of list
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	int elements = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		++elements;
	}

	return (elements);
}
