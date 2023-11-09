#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head list
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
