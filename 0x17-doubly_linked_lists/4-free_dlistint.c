#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 *
 * @head: head of linked list
 *
 * Return: VOID
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
