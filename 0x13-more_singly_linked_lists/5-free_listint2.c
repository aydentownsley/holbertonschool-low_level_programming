#include "lists.h"

/**
 * free_listin2 - frees a list
 *
 * @head: head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr, *next;

	curr = *head;
	if (curr == NULL)
	{
		*head = NULL;
		return;
	}
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}

	*head = NULL;
}
