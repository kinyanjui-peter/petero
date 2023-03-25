#include "lists.h"
/**
 * *add_dnodeint - adds a node at the beggining
 * @head: head pointer
 * @n: node counter
 * Return: newnode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;
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
		temp = *head;
		while (temp->next == NULL)
		{
			temp->next = newnode;
			newnode->next = NULL;
			newnode->n = n;
	}
	}
	return (newnode);
}
