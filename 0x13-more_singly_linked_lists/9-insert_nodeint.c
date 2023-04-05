#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: singly linked pointer
 * @idx: node index
 * @n: node data to be inserted at idx
 *
 * Return: addres of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;
	unsigned int count = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	ptr = *head;
	if (ptr == NULL)
                return (NULL);
	idx--;
	while (ptr != NULL && (count < idx))
	{
		ptr = ptr->next;
		count++;
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return (temp);
}
