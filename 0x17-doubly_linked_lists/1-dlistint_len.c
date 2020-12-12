#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a doubly linked list
 *
 * @h: pointer to the head of doubly linked list
 *
 * Return: number of elements of in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;

    while (h != NULL)
    {
        h = h->next;
        ++count;
    }

    return (count);
}
