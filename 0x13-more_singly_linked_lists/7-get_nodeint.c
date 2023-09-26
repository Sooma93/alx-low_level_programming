#include "lists.h"
/**
 * get_nodeint_at_index - return nth
 * @head: first node
 * @index: index of the node
 * Return: nth
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	unsigned int i = 0;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	return (node ? node : NULL);
}
