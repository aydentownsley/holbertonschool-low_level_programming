#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of a linked list
 *
 * @head: head of the linked list
 * @n: int to be stored in list
 *
 * Return: ADDRESS of new element in list
 * OR NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *index, *new;

	new = malloc(sizeof(listint_t));
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	index = *head;

	while (index->next != NULL)
	{
		index = index->next;
	}

	index->next = new;

	return (new);
}
