#include "lists.h"

/**
 * free_dlistint - a function that frees a doubly linked list
 * @h: a dlistint list to be freed
 * Return: nothing
 */

void free_dlistint(dlistint_t *h)
{
	dlistint_t *hcopy;

	while (h)
	{
		hcopy = h->next;
		free(h);
		h = hcopy;
	}
}
