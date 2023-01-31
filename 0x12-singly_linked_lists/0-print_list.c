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
typedef struct list_s
{
	char *str;
	char *str;
	struct list_s *next;
} list_t;
/**
 * print_list - prints all elements
 *@h: pointer to print element
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t lenode;

	lenode = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("%d",0, "(nil)");
		else
		printf("[%d] %s", h->len, h->str);
		h = h->next;
		lenode += 1;
	}
	return (lenode);
}
