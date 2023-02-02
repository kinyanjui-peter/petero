#include "lists.h"
/**
 * pop_listint - free
 *@head: pointer to head;
 *
 *Return: i
 */
int pop_listint(listint_t **head)
{
	listint_t *current, *nextone;
	int i;

	current = *head;
	i = current->n;
	nextone = current;
	nextone = nextone->next;
	free(current);
		current = nextone;
	return (i);
}
