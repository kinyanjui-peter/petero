#include <stdio.h>
#include "lists.h"
/**
 * listint_len - return the number of elements
 *@h: pointer to the elements
 *
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t  c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
