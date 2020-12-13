#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 *
 * @head: head of the list
 * @n: interger to store in new node
 *
 * Return: Address of new node
 * OR NULL if failed to add
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
