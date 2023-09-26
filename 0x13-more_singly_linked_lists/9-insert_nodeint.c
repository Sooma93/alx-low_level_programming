#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @head: first node
 * @idx: insert node
 * @n: data inserted
 * Return: idx
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
		if (!new || !head)
			return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; node && i < idx; i++)
	{
	if (i == idx - 1)
	{
	new->next = node->next;
node->next = new;
return (new);
	}
	else
		node = node->next;
	}
	return (NULL);
}
