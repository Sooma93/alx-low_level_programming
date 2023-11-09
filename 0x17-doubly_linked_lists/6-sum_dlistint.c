#include "lists.h"

/**
 * sum_dlistint - sum of list
 * @head: head list
 * Return:sumation
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
