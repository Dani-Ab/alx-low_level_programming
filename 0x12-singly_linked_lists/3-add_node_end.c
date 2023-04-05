#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - add a node at the end of the linked list
 * @head: node pointer
 * @str: a string pointer
 *
 * Return: 1 for sucssess
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new, *temp;

	while (str)
		len++;
	new = malloc(sizeof(list_t));
	temp = *head;
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	while (str)
		len++;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
		*head = new;
	return (new);
}
