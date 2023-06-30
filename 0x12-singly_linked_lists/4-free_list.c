#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: the pointer to the first node of the list
 *
 * Return: returns nothing
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
