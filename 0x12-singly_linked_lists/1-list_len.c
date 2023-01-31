#include <stdio.h>
/**
 * list_len - list lenth
 *@h: pointer to elements
 *Return: number of elemnts
 */

size_t list_len(const list_t *h)
{
	size_t x;

	x = 0;
	while (x)
	{
		h = h->next;
		x++;
	}
	return (x);
}
