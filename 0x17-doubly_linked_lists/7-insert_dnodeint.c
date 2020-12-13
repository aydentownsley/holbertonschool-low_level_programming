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
	unsigned int length = 0;

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
	dlistint_t *new, *current = *h;
	unsigned int itr = 1, listlen = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || current == NULL)
	{
		free(new);
		return (NULL);
	}
	listlen = listlength(current);
	if (idx >= listlen + 1)
	{
		free(new);
		return (NULL);
	}
	current = *h;
	while (current && itr < idx)
	{
		current = current->next;
		++itr;
	}
	new->n = n;
	if (idx != 0)
	{
		new->next = current->next;
		current->next = new;
		new->prev = current;
	}
	else
	{
		new->next = current;
		new->prev = NULL;
		*h = new;
	}
	return (new);
}
