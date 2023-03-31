#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - a function adding new node at the end
 * @head: the pointer to the head
 * @str: a pointer to the string
 *
 * Return: address of a new element or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	if (!(*head))
		return (NULL);

	new = malloc(sizeof(list_t));

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;

	while (*head)
	{
		if ((*head)->next == NULL)
			*head = new;
	}
	new->next = NULL;

	return (new);
}
