#include "lists.h"

/**
 * sum_listint - a function that sums values of a listint_t list
 * @head: pointer listint_t list
 * Return: the sum of all the data in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
