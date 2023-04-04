#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head
 * @head: a pointer to the head of node
 * Return: head node's data (n) or 0 if empty
 */

int pop_listint(listint_t **head)
{
	int n_data = 0;
	listint_t *new;

	if (*head)
	{
		new = (*head)->next;
		n_data = (*head)->n;
		free(*head);
	}

	*head = new;

	return (n_data);
}
