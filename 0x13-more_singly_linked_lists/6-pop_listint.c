#include "lists.h"
/**
 * pop_listint - to pop
 * @head: pointer
 * Return: the element or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (i);
}
