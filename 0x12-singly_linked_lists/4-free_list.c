#include "lists.h"
#include <stdio.h>
/**
 * free_listi - free a linked list
 * @head: singly linked pointer
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}

