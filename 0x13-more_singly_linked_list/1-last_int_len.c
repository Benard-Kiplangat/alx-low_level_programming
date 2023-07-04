#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a list
 *
 * @h: the list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n_elem = 0;

	while (h)
	{
		n_elem++;
		h = h->next;
	}
	return (n_elem);
}
