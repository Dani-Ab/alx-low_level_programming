#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return number of elements
 * @h: singly linked pointer
 *
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
