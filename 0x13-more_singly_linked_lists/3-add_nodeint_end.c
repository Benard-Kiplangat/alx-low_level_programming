#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new element to the end of a list
 *
 * @head: a pointer to the address of the starting node
 * @n: the integer to add to the last new node
 *
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *h = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (h->next)
			h = h->next;
		h->next = new_node;
	}
	return (new_node);
}
