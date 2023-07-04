#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint
 *
 * @head: the pointer to the head node
 * @index: the index of the node starting from 0
 *
 * Return: the nth node or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h = head;

	if (head)
	{
		while (i < index && h->next)
		{
			h = h->next;
			i++;
		}
		if (h)
			return (h);
	}
	return (NULL);
}
