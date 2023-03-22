#include "lists.h"
/**
 * add_dnodeint - adds a node at the beggining
 * @head: head pointer
 * @n: node counter
 * Return: newnode
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->next = *head;
	newnode->prev = NULL;
	newnode->n = n;
	if(*head != NULL)
	{
		(*head)->prev = newnode;
	}
	return (newnode);
}
