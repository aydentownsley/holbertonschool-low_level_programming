#include "lists.h"

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
	unsigned int itr = 0, listlen = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL || current == NULL)
		return (NULL);

	while (current)
	{
		current = current->next;
		++listlen;
	}

	if (idx >= listlen)
		return (NULL);

	current = *head;
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
	}
	else
	{
		new->next = current;
		*head = new;
	}
	if (new == NULL)
		return (NULL);

	return (new);
}
