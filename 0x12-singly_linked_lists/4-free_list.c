#include "lists.h"

/**
 * free_list - frees the memory used to create a list
 *
 * @head: first node of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *this, *next;

	this = head;

	while (this != NULL)
	{
		next = this->next;
		free(this->str);
		free(this);
		this = next;
	}
}
