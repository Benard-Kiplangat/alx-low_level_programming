#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 *
 * @h: the list
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
