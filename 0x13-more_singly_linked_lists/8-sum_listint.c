#include "lists.h"

/**
 * sum_listint - return all sum
 * @head: first node
 * Return: all sum
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;

	int i = 0;

	while (node)
	{
		i += node->n;
		node = node->next;
	}
	return (i);
}
