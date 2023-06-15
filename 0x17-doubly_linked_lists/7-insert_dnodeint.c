#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 1;
	dlistint_t *pointer = NULL, *new_node = NULL;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	pointer = *h;
	while (pointer != NULL)
	{
		if (counter == idx && pointer->next == NULL)
			return (add_dnodeint_end(h, n));
		else if (counter == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = pointer->next;
			pointer->next->prev = new_node;
			new_node->prev = pointer;
			pointer->next = new_node;
			return (new_node);
		}
		pointer = pointer->next;
		counter++;
	}
	return (NULL);
}
