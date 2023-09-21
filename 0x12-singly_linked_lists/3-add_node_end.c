#include "lists.h"
/**
 * add_node_end - add end node
 * @head: the first node address
 * @str: string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	unsigned int l = 0;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[l])
		l++;
	temp->len = l;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	temp2 = *head;
		while (temp2->next)
			temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
