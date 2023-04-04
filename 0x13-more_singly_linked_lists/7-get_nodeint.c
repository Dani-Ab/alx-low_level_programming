#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - to acesses the nth node of linked list
 * @head: singly linked pointer
 * @index: node index
 *
 * Return: selected node data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL && (count < index))
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
