#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node from
 * a doubly linked list
 *
 * @head: head of list
 * @index: index of node to be deleted
 *
 * Return: 1 if succeeds
 * OR -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = *head;
	unsigned int itr = 1;

	while (itr <= index)
	{
		cursor = cursor->next;
		itr++;
	}

	cursor->prev->next = cursor->next;
	cursor->next->prev = cursor-> prev;

	free(cursor);

	return (1);
}
