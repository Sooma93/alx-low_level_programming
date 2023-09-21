#include "lists.h"

/**
 * list_len - return elemedny
 * @h: singly linked list
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
