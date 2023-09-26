#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print safe varsion
 * @head: pointer first node
 * Return: new node
 */


size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = NULL;
	const listint_t *ix = NULL;
	size_t count = 0;
	size_t nw = 0;

	node = head;
	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		count++;
		node = node->next;
		ix = head;
		nw = 0;
		while (nw < count)
		{
			if (node == ix)
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				return (count);
			}
			ix = ix->next;
			nw++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
