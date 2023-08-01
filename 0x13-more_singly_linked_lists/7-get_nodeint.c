#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: Head of the listint_t list.
 * @index: index of th node
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	node = head;
	if (node != NULL)
	{
		while (node)
		{
			if (index == count)
				return (head);

			node = node->next;
			head = node;
			count++;
		}
	}
	else
	{
		return (NULL);
	}

	return (node);
}
