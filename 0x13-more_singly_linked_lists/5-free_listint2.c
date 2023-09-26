#include "lists.h"

/**
 * free_listint2 - free list
 * @head: poinrer
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (head == NULL)
		return;
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = node;
}
