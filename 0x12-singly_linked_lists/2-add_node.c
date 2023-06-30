#include "lists.h"

/**
 * add_node - a function that add a new node at the beginning of a linked list
 * @head: pointer to the head
 * @str: the string element to add
 *
 * Return: the address of the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char*str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->next = *head;
	*head = new;
	new->str = strdup(str);

	return (new);
}
