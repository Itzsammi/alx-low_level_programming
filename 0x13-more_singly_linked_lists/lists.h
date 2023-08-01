  1 #ifndef LIST_H
  2 #define LIST_H
  3
  4 #include <stdlib.h>
  5
  6 /**
  7  * struct listint_s - singly linked list
  8  * @n: integer
  9  * @next: points to the next node
 10  *
 11  * Description: singly linked list node structure
 12  *
 13  */
 14 typedef struct listint_s
 15 {
 16             int n;
 17                 struct listint_s *next;
 18 } listint_t;
 19
 20 size_t print_listint(const listint_t *h);
 21 size_t listint_len(const listint_t *h);
 22 listint_t *add_nodeint(listint_t **head, const int n);
 23 listint_t *add_nodeint_end(listint_t **head, const int n);
 24 void free_listint(listint_t *head);
 25 void free_listint2(listint_t **head);
 26 int pop_listint(listint_t **head);
 27 listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
 28 int sum_listint(listint_t *head);
 29 listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
 30 int delete_nodeint_at_index(listint_t **head, unsigned int index);
 31 listint_t *reverse_listint(listint_t **head);
 32 size_t print_listint_safe(const listint_t *head);
 33 size_t free_listint_safe(listint_t **h);
 34 listint_t *find_listint_loop(listint_t *head);
 35
 36 #endif
