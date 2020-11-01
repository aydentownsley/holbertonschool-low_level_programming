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

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str == '\0')
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		length = 0;
		new->str = strdup(str);
		while (str[length] != '\0')
			length++;
		new->len = length;
	}

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
