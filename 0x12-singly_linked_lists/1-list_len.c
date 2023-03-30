#include "lists.h"

/**
 * list_len: a function to print the number of elements in a LL
 * @h: pointer to the first node
 * Return: always 0
*/

size_t list_len(const list_t *h)
{
size_t i = 0;

while (h)
{
	while (h->next)
	{
	i++;
	h = h->next;
	}
}
printf("-> %lu elements\n", i);
return (0);
}
