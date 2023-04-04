#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of a linked list.
 * @idx: index of the list where the new node is added.
 * @n: integer value.
 *
 * Return: the address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head, *next;
	unsigned int i = 0;

	if (!*head)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = ptr;
		*head = new_node;
		return (*head);
	}

	for (i = 1; ptr != NULL && i < idx - 1; i++)
		ptr = ptr->next;

	if (ptr == NULL || ptr->next == NULL)
		return (NULL);

	next = ptr->next;
	ptr->next = new_node;
	new_node->next = next;

	return (new_node);
}
