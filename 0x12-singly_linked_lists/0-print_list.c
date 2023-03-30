#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - a function that prints all elements of a list
 * @h: a pointer to the first element
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t i = 0;

if (h == NULL)
	printf("[0] (nil)");
else
	while (h->next != NULL)
	{
		printf("[%u], %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
return (i);
}
