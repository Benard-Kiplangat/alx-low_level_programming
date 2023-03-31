#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list
 * @head: a pointet to the first list
 *
 * Return: always 0;
 */

void free_list(list_t *head)
{
	while (head == NULL)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
