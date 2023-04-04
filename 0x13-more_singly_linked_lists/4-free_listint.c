#include "lists.h"

/**
 * free_listint - frees linked list.
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
