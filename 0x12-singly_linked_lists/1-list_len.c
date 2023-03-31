#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list
 * @h: pointer to the first node
 * Return: always 0
*/

size_t list_len(const list_t *h)
{
unsigned int i = 0;

while (h)
{
	i++;
	h = h->next;
}

return (i);
}
