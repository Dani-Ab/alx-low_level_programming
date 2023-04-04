#include "lists.h"
#include <stdio.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: singly linked pointer
 *
 * Return: head node data sucesses 0 linklist is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int i = 0;

	if (*head == NULL)
		return (0);
	i = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (i);

}
