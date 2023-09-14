#include "lists.h"

/**
 * get_dnodeint_at_index - a function that gets nth node of a doubly linked list
 * @head: a pointer to head of list
 * @index: the position of the node starting from 0
 * Return: the nth node of a dlistint_t linked list or NULL if doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (!head)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}
	return (head);
}
