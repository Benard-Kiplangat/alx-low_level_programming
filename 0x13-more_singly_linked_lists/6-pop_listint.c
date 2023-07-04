#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a list
 *
 * @head: the head node pointer
 *
 * Return: the head node's data or 0 if null
 */

int pop_listint(listint_t **head)
{
	if (*head)
	{
		listint_t *h = *head;
		int n = (*head)->n;

		(*head) = (*head)->next;

		free(h);
		h = NULL;
		return (n);
	}
	return (0);
}
