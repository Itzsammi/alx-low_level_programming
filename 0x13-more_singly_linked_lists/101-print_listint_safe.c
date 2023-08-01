#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *current = head;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			num_nodes++;
			slow = slow->next;
			while (slow != fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				num_nodes++;
				slow = slow->next;
			}
			break;
		}
	}
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		num_nodes++;
		current = current->next;
	}
	if (num_nodes > sizeof(listint_t *) * 8)
	{
		fprintf(stderr, "Error: The list contains a loop\n");
		exit(98);
	}

	return (num_nodes);
}
