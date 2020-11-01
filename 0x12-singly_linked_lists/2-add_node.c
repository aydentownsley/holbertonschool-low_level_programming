#include "lists.h"

/**
 * add_node - adds a node to a singly linked list
 *
 * @head: first node of list
 * @str: string value stored in node
 *
 * Return: address of the new node
 * OR NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int length;
	list_t *new;

	for (length = 0; str[length] != '\0'; length++)
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
	new->next = *head;
	*head = new;

	return (new);
}
