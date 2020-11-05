#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node into list at nth index
 *
 * @head: head of list
 * @idx: index to insert node
 * @n: value to put in inserted node
 *
 * Return: ADDRESS of the new node
 * OR NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current = *head;
	unsigned int itr = 1;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (current == NULL)
		return (NULL);

	while (current && itr < idx)
	{
		current = current->next;
		++itr;
	}

	new->next = current->next;
	new->n = n;
	current->next = new;

	if (new == NULL)
		return (NULL);

	return (new);
}
