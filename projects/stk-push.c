#include "monty.h"

/**
 * push - inserts an element/ node to the stark
 * @n: dat parsed
 * Return: null
 */
void push(x)
{
	stack_t *newlayer;

	x = atoi(x);
	if (x == NULL)
	{
		printf("L<__LINE__>: usage: push integer");
		exit (EXIT_FAILURE);
	}

	newlayer = (stack_t *)malloc(sizeof(stack_t));
		if(newlayer == NULL)
		{
			printf("nothing to add");
			return;
		}
	newlayer->n = x;
	newlayer->next = top;
	newlayer = top;
}
