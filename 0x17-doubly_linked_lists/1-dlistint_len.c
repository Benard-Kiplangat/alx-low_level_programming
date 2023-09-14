#include "lists.h"

/**
 * dlistint_len - a function that counts elements of a doubly linked list
 * @h: a dlistint list to print its elements
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
