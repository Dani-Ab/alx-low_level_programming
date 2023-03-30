#include "lists.h"
#include <stdio.h>

/**
 * list_len - return number of elements
 * @h: list_t list pointer to print
 *
 * Return:number of elements
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		/*if (!h->str)*/
			/* printf("[0] (nil)\n");*/
		/* else*/
			/* printf("[%u] %s\n", h->len, h->str);*/
		h = h->next;
		s++;
	}
	return (s);
}
