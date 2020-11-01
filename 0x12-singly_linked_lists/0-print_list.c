#include "lists.h"

/**
 * print_list - prints the values of the singly linked list
 *
 * @h: pointer to singly linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		++count;
	}

	return (count);
}
