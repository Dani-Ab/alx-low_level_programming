#include "lists.h"
#include <stdio.h>

/**
 * print_listint - orint all the element of list
 * @h: singly linked pointer
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);

}
