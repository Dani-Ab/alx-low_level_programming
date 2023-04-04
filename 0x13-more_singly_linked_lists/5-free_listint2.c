#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - free a linked list and sets head NULL
 * @head: singly linked pointer
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head != NULL)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
