#include "lists.h"

/**
 * listlength - gets length of linked list
 *
 * @h: head of list
 *
 * Return: length
 */

unsigned int listlength(dlistint_t *h)
{
	unsigned int length = -1;

	while (h)
	{
		h = h->next;
		++length;
	}

	return (length);
}

/**
 * insert_dnodeint_at_index - inserts node into list at nth index
 *
 * @h: head of list
 * @idx: index to insert node
 * @n: value to put in inserted node
 *
 * Return: ADDRESS of the new node
 * OR NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cursor = *h;
	unsigned int itr = 1;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx > listlength(cursor) + 1)
		return (NULL);
	cursor = *h;
	while (h && itr < idx)
	{
		cursor = cursor->next;
		itr++;
	}
	if (idx == 0)
	{
		new->next = cursor;
		new->prev = *h;
		*h = new;
	}
	else
	{
		new->next = cursor->next;
		cursor->next = new;
		new->prev = cursor;
	}

	return (new);
}
