#include "lists.h"

/**
 * add_node_end - add a node to the end of a singly linked list
 *
 * @head: first node in list
 * @str: string to be stored in head
 *
 * Return: node at end of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int length;

	for (length = 0; str[length] != NULL; length++)
		;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = length;
	new->next = NULL;

	if (head == NULL)
	{
		*head = NULL;
		return (new);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
