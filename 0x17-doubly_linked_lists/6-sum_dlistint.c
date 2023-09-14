#include "lists.h"

/**
 * sum_dlistint - a function that return the sum of all the data in a dbly list
 * @head: the head of the linked list
 * Return: sum of all data or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* while we have a pointer to the list */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
