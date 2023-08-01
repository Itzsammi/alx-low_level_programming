#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint -  sum of all the data (n) of a listint_t list.
 * @head: Head of the listint_t list.
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	sum = 0, tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
