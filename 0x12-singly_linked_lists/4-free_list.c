#include "lists.h"

/**
 * free_list - frees the memory used to create a list
 *
 * @head: first node of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
