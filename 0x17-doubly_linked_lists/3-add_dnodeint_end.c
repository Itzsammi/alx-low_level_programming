#include "lists.h"

/**
 * add_dnodeint_end - adding a new node at the end of a list
 * @head: points to the head pointer
 * @n: value of the element
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	end = *head;

	if (end != NULL)
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = end;

	return (new);
}
