#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert a new node at a given positin
 * @head: singly linked pointer
 * @idx: node index
 * @n: node data
 *
 * Return: addres of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr  = *head;
	listint_t *temp = malloc(sizeof(listint_t));
	unsigned int count = 0;

	temp->n = n;
	temp->next = NULL;

	while (ptr != NULL && (count < idx))
	{
		ptr = ptr->next;
		count++;
	}
	if (ptr == NULL)
		return (NULL);
	temp->next = ptr->next;
	ptr->next = temp;
	return (temp);
}
