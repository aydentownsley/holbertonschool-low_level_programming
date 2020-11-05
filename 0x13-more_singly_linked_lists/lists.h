#ifndef _LISTS_H_
#define _LISTS_H_

/*_______ STRUCT _______*/

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct listint_s
{
        int n;
        struct listint_s *next;
} listint_t;

/*_______ HEADERS _______*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/*_______ PROTOTYPES _______*/

size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);
void free_listint(listint_t *);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

#endif /*_LISTS_H_*/
