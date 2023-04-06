#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - delet a node at given index
 * @head: singly linked pointer
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempp = *head;
	listint_t *tempc = *head;
	unsigned int i = 1;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = tempc->next;
		free(tempc);
		tempc = NULL;
		return (1);
	}
	while (tempp != NULL)
	{
		if (index == i)
		{
			tempc = tempp->next;
			tempp->next = tempc->next;
			free(tempc);
			tempc = NULL;
			return (1);
		}
		tempp = tempp->next;
		i++;
	}
	return (-1);
}
