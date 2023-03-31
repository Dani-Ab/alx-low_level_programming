#include "lists.h"
#include <stdio.h>
/**
 * add_node - add a node to linked list
 * @head: node pointer
 * @str: a string pointer
 *
 * Return: 1 for sucssess
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;
	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
		{
			return (NULL);
		}
	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;
	return (temp);
	}

	return (0);
}
