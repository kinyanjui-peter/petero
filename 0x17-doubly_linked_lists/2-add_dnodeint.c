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
	
	if (!(n)) 
	{
		return (NULL);
	}
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*head = newnode;
		newnode->n = n;
	}
	else
	{
	(*head)->prev = newnode;
	newnode->prev = NULL;
	newnode->n = n;
	}
	return(newnode);
}
