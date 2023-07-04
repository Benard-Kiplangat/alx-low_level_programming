#include "lists.h"

/**
 * add_nodeint - a function that adds a new node to the beggining of a list
 *
 * @head: pointer to the first node
 * @n: the integer to add to the node
 *
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;

	(*head) = new_node;

	return (new_node);
}
