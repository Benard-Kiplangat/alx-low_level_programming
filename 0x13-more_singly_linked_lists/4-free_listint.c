#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "lists.h"

/**
 * free_listint - a function that frees memory for listint_t list
 * @head: the pointer to the head of the node
 *
 * Return: Always 0;
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
