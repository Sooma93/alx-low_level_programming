#include "lists.h"
/**
 * reverse_listint - reverese list
 * @head: first node
 * Return: pointer
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = nxt;
	}
	*head = pre;
	return (*head);
}


