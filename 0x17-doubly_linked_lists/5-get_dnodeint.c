#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n_node = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i < index && n_node)
	{
		n_node = n_node->next;
		i++;
	}

	if (!n_node)
		return (NULL);

	return (n_node);
}
