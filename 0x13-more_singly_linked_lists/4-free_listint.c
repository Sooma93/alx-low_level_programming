#include "lists.h"

/**
 * free_listint - free all link
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
