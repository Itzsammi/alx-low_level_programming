#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)

	{
		i = head->next;
		free(head);
		head = i;
	}
}
