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
unsigned int i = 0;

if (h == NULL)
	printf("[0] (nil)");

while (h != NULL)
{
	if (h->str == NULL)
		printf("-> [%u] (nil)\n", h->len);
	else
		printf("-> [%u] %s\n", h->len, h->str);
	h = h->next;
	i++;
}

return (i);
}
