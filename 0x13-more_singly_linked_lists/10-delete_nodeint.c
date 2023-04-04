#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index (index) of linked list
 * @head: head pointer to node
 * @index: index of node
 *
 * Return: 1 if successful, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *present = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(present);
		present = NULL;
		return (1);
	}

	while (index != 0)
	{
		previous = present;
		present = present->next;
		if (present == NULL)
			return (-1);
		index--;
	}

	previous->next = present->next;
	free(present);
	present = NULL;
	return (1);
}
