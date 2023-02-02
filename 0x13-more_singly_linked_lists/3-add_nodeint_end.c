#include "lists.h"
/**
 * add_nodeint_end - add node at theend
 *@head: pointer to head address
 *@n: elements of lists
 *Return: new lement address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = *head;
	newnode = (listint_t *)malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
		newnode = temp->next;
	}
	return (newnode);
}

