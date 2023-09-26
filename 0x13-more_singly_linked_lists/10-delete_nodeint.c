#include "lists.h"
/**
 * delete_nodeint_at_index - delet node
 * @head: first node
 * @index: deleted onde
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *del = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (i < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		i++;
	}
	del = node->next;
	node->next = del->next;
	free(del);
	return (1);
}
