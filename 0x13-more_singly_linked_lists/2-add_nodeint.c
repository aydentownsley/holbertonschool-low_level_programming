#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list
 *
 * @head: pointer to head of list
 * @n: value to be stored in node
 *
 * Return: ADDRESS of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
