#include "lists.h"
/**
 * free_listint2 - fre list
 *@head: head
 *
 *Return: 0;
 */
void free_listint2(listint_t **head)
{
listint_t *nextone;
if (head == NULL)
	return (NULL);
while (*head != NULL)
{
	nextone = (*head)->next;
	free(*head);
	*head = nextone;
}
}
