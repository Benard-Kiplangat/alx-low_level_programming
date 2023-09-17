#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a
 * given position
 * @h: the pointer to the head node
 * @idx: the index that shows the position to insert the new node
 * @n: the data to insert
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nwnode;
	unsigned int i = 0;
	dlistint_t *k = *h;

	nwnode = malloc(sizeof(dlistint_t));

	if (nwnode == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return(NULL);
	}
	nwnode->n = n;
	for (i = 0; k != NULL && i < idx; i++)
		k = k->next;
	if (k == NULL && i < idx)
		return (NULL);
	nwnode->next = k;
	nwnode->prev = k->prev->prev;
	k->prev->next = nwnode;
	return (nwnode);
}
