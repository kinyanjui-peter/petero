#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/* *
 * struct list_s - singly linked list*
 * @str: string - (malloc'ed string)
 *@len: length of the string
 *@len: length of the string
 *
 *Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	size_t lenode;

	lenode = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d] %s", h->len, h->str);
		h = h->next;
		lenode++;
	}
	return (lenode);
}
