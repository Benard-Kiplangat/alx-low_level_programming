#include "lists.h"

/**
 * print_dlistint - a function that prints elements of a doubly linked list
 * @h: a dlistint list to print its elements
 * Return: the number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
