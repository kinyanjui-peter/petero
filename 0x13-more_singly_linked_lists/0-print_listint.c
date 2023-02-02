#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all the elements in a list
 *@h: 1st member
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
