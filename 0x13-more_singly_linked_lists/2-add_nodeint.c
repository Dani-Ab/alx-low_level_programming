#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add new node at the beginning
 * @head: singly linked pointer
 * @n: data to be stored
 *
 * Return: addres on new elemnet sucesses NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *) malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
