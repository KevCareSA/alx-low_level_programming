#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: reference pointer to linked lists head node
 *
 * Return: head pointer to reverses linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;

	return (*head);
}
