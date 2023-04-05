#include "lists.h"
#include <stdio.h>
/**
 * free_list - free a linked list
 * @head: singly linked pointer
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->str
		free(head->str);
		free(head);
		head = temp;
	}
}

