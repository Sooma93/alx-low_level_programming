#include "lists.h"

/**
 * add_node - new node
 * @head: linked list head
 * @str: string
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
		for (i = 0; str[i]; i++)
			new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
