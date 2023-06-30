#include "lists.h"

/**
 * print_list - a function that prints all elements of a linked list
 * @h: the list to print all its elements
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (1);
	}
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%li] %s\n", strlen(h->str), h->str);
		h = h->next;
		i++;
	}
	return (i);
}
