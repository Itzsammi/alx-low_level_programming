#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * free_listint2 -  frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * Description: The sets head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
	free(*head);
	*head = NULL;
}
