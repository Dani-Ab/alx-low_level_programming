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
	listint_t *link;

	while (temp != NULL)
	{
		link = temp->next;
		free(temp);
		temp = link;
	}
	*head = NULL;
}
