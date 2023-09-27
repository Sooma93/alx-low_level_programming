#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: pointer to first node
 * Return: pointer
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int j;
	listint_t *node;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
