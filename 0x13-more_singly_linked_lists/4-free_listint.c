#include "lists.h"

/**
 * free_listint - frees a singly linked list
 *
 * @head: head of linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new = head;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
