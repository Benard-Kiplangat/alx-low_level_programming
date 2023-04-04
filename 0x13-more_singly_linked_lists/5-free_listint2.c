#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees memory for listint_t list
 * @head: a pointer to the head of node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	while (*head)
	{
		new = (*head)->next;
		free(*head);

		*head = new;
	}
	*head = NULL;
}
