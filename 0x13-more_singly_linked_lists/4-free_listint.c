#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 *
 * @head: a pointer to the first node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	if(head)
	{
		while(head->next)
		{
			free(head);
			head = head->next;
		}
		free(head);
	}
}
