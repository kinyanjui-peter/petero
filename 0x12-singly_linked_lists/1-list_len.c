#include <stdio.h>
#include "lists.h"
/**
 * list_len - list lenth
 *@h: pointer to elements
 *Return: number of elemnts
 */

size_t list_len(const struct list_s *h)
{
	list_t *x ;

	h = head;
	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
