#include "lists.h"

/**
 * get_nodeint_at_index - returns the value of the nth node
 * INDEX - starts at 0
 *
 * @head: head of the list
 * @index: index of desired node
 *
 * Return: nth node
 * OR NULL if node not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int itr = 0;

	if (current == NULL)
		return (NULL);

	while (current && itr < index)
	{
		current = current->next;
		++itr;
	}

	return (current);
}
