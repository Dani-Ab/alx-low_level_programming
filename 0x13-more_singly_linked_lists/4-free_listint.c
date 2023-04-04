#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free a linked list
 * @head: singly linked pointer
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
