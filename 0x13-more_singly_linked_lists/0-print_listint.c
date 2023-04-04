#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of
 * listint_t list
 * @h: the linked list
 * Return: return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%u\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
