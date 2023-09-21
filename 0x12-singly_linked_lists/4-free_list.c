#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free
 * @head: free list
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
