#include "lists.h"

/**
 * reverse_listint - a function that reverses the nodes of a linked list
 *
 * @head: the pointer to the head node
 *
 * Return: the first node of the element
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = *head;
	listint_t *h = (*head)->next;

	if (*head)
	{
		while (h)
		{
			prev->next = h->next;
			prev = h;
			h = h->next;
		}
		*head = prev;
		return (h);
	}
	exit(98);
}
