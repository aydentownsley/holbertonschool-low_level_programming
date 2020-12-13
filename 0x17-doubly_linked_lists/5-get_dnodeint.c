#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 *
 * @head: head of list
 * @index: index of node requested
 *
 * Return: INDEX (starting from 0)
 * OR NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int itr = 0;

	if (current == NULL)
		return (NULL);

	while (current && itr < index)
	{
		current = current->next;
		++itr;
	}

	return (current);
}
