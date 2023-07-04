#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts new node at a given index
 *
 * @head: pointer to the head node
 * @idx: the index where the node should be inserted
 * @n: the data to insert
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (*head)
	{
		listint_t *h = *head;
		unsigned int i = 0;
		listint_t *new_node;

		while (h && i < idx - 1)
		{
			h = h->next;
			i++;
		}

		new_node = malloc(sizeof(listint_t));

		if (new_node)
		{
			new_node->n = n;
			new_node->next = h->next;
			h->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
