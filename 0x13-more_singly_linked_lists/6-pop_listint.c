#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of linked list
 * @head: reference to head pointer of linked list
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *ptr = *head;

	if (!*head)
		return (0);

	node_data = (*head)->n;
	*head = ptr->next;

	free(ptr);

	return (node_data);
}
