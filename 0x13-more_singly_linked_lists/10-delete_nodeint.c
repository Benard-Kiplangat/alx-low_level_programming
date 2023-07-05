#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node at a given index
 * @head: pointer to the head node
 * @index: position of the node to delete
 *
 * Return: 1 on success and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head)
	{
		listint_t *h = (*head);
		listint_t *prev = *head;
		unsigned int i = 0;

		if (index == 0)
		{
			*head = (*head)->next;
			free(prev);
			return (1);
		}
		while (h->next && i < index - 1)
		{
			prev = h;
			h = h->next;
			i++;
		}
		if (h->next)
		{
			prev->next = h->next;
			free(h);
			return (1);
		}
		prev->next = NULL;
		free(h);
		return (1);
	}
	return (-1);
}
