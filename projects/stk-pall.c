#include "monty.h"
/**
 * pall - Prints elemenets of a stack from top to bottom
 * Return: 0
 */

void pall(void)
{
	stack_t *temp;

	if(top == 0)
	{
		printf("list is empty");
		return;
	}
	temp = top;
	while(temp != 0)
	{
		printf("%d\n",temp->n);
		temp = temp->next;
	}
}
