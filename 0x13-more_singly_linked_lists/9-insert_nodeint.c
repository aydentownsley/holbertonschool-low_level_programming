#include "lists.h"

/**
 * listlength - gets length of linked list
 *
 * @h: head of list
 *
 * Return: length
 */

unsigned int listlength(listint_t *h)
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
 * insert_nodeint_at_index - inserts node into list at nth index
 *
 * @head: head of list
 * @idx: index to insert node
 * @n: value to put in inserted node
 *
 * Return: ADDRESS of the new node
 * OR NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current = *head;
	unsigned int itr = 1, listlen = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL || current == NULL)
	{
		free(new);
		return (NULL);
	}
	listlen = listlength(current);

	if (idx >= listlen)
		return (NULL);
	current = *head;

	while (current && itr < idx)
	{
		current = current->next;
		++itr;
	}
	if (n)
		new->n = n;
	else
		return (NULL);
	if (idx != 0)
	{
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = current;
		*head = new;
	}

	return (new);
}
