#include "lists.h"

/**
 * pop_listint - deletes head node, and returns its data
 *
 * @head: head of linked list
 *
 * Return: data from deleted head node
 */

int pop_listint(listint_t **head)
{
	listint_t *curr, *next;
	int n;

	curr = *head;
	n = curr->n;
	next = curr->next;

	free(curr);

	*head = next;

	return (n);
}
