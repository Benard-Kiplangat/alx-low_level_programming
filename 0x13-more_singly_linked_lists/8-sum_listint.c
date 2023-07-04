#include "lists.h"

/**
 * sum_listint - a function that retums sums of all data in a linked list
 *
 * @head: pointer to the head node
 *
 * Return: the sum of the data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		listint_t *h = head;

		while (h)
		{
			sum += h->n;
			h = h->next;
		}
	}
	return (sum);
}
