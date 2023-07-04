#include "lists.h"

/**
 * free_listint2 - a function that frees a list and set head to null
 *
 * @head: a pointer to the head node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *h = *head;

	if (*head)
	{
		while (h->next)
		{
			free(h);
			h = h->next;
		}
		free(h);
		*head = NULL;
	}
}
