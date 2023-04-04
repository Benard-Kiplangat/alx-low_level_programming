#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the beginning of
 * a listint_t list
 * @head: pointer to the pointer of first element
 * @n: the value
 *
 * Return: address of the new element or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp_node = *head;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	} else
		return (NULL);

	if (temp_node != NULL)
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = new;
	} else
	*head = new;

	return (new);
}
