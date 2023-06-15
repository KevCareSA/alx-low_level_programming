#include "lists.h"

/**
 * add_dnodeint - Adds a new_nodes node at the beginning of a dlistint_t list.
 * @head: A pointer to the head.
 * @n: integer for the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes;

	new_nodes = malloc(sizeof(dlistint_t));
	if (new_nodes == NULL)
		return (NULL);

	new_nodes->n = n;
	new_nodes->prev = NULL;
	new_nodes->next = *head;
	if (*head != NULL)
		(*head)->prev = new_nodes;
	*head = new_nodes;

	return (new_nodes);
}
