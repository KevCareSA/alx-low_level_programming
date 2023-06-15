#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_now = *head;
	unsigned int counter;

	if (!head || !node_now)
		return (-1);

	if (index == 0)
	{
		node_now = node_now->next;
		free(*head);
		*head = node_now;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (counter = 0; node_now; counter++)
	{
		if (counter == index)
		{
			if (node_now->next)
			{
				(node_now->prev)->next = node_now->next;
				(node_now->next)->prev = node_now->prev;
				free(node_now);
				return (1);
			}
			else
			{
				(node_now->prev)->next = NULL;
				free(node_now);
				return (1);
			}
		}
		node_now = node_now->next;
	}

	return (-1);
}
