#include "lists.h"

/**
 * listlength - gets length of linked list
 *
 * @h: head of list
 *
 * Return: length
 */

unsigned int listlength(dlistint_t *h)
{
        unsigned int length = -1;

        while (h)
        {
                h = h->next;
                ++length;
        }

        return (length);
}

/**
 * delete_dnodeint_at_index - deletes node from
 * a doubly linked list
 *
 * @head: head of list
 * @index: index of node to be deleted
 *
 * Return: 1 if succeeds
 * OR -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = *head, *len = *head;
	unsigned int itr = 1;

	if (index > listlength(len) + 1)
		return (-1);
	if (index == 0)
	{
		*head = cursor->next;
		cursor->prev = NULL;
	}
	else
	{
		while (itr <= index)
		{
			cursor = cursor->next;
			itr++;
		}
		cursor->prev->next = cursor->next;
		cursor->next->prev = cursor->prev;
	}
	return (1);
}
