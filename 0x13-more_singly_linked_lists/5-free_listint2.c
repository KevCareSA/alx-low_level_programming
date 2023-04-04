#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: reference to pointer of head
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head, *next;

	if (!head)
		return;

	while (ptr)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}

	*head = NULL;
}
