  1 #include <stdlib.h>
  2 #include "lists.h"
  3 #include <stdio.h>
  4
  5 /**
  6   * print_listint - Prints all the elements of a listint_t list.
  7   * @h: A pointer to the head.
  8   *
  9   * Return: The number of nodes.
 10   */
 11 size_t print_listint(const listint_t *h)
 12 {
 13         size_t nodes = 0;
 14         while (h)
 15         {
 16                 nodes++;
 17                 printf("%d\n", h->n);
 18                 h = h->next;
 19         }
 20         return (nodes);
 21 }
