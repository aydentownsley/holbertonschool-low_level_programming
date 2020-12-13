#include "lists.h"

/**
 * add_dnodeint - adds a node to a singly linked list
 *
 * @head: first node of list
 * @n: int value stored in node
 *
 * Return: address of the new node
 * OR NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
