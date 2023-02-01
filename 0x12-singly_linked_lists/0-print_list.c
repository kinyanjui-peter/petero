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

	temp->len = 0;
	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("%s", temp->str);
		temp->++;
		temp = temp->next;
	}
	printf("[%d] %s", temp->str);
	return (temp->len);
}
