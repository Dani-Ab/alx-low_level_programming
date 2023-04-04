#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add new node at the end of the node
 * @head: singly linked pointer
 * @n: data to be stored
 *
 * Return: addres on new elemnet sucesses NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp =  malloc(sizeof(listint_t));
	ptr = *head;
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
