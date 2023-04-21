#include "lists.h"

/**
 * get_nodeint_at_index - a function to find a node at specific index
 * @head: pointer to listint_t
 * @index: index of the node
 * Return: a pointer to node at specified index, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}