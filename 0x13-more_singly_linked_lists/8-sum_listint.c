#include "lists.h"

/**
 * sum_listint - return the summ of all the data
 * @head: singly linked pointer
 *
 * Return: sum if success 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
