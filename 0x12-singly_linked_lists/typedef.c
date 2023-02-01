#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 *@len: length of the string
 *@next: points to the next node
 * main - main func
 *Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void main(void)
{
	*list_t.len = 2;
	printf("length ----->%d", list_t->len);
}
