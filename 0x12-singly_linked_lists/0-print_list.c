#include <stdio.h>
#include "lists.h"

/**
 * print_list - display linked list
 * @h: variable of type list_t;
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	list_t *temp;
	unsigned int c = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d]%s", temp->len, temp->str);
		c++;
		temp = temp->next;
	}
	printf("[%d]%s", temp->len, temp->str);
	return (c);
}
