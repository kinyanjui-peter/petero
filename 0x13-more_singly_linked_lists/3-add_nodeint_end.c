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

	newnode = (listint_t *)malloc(sizeof(listint_t));
	{
		if (newnode == NULL)
			return (NULL);
	}
	newnode->n = n;
	/*temp->next = NULL;*/
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
		temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
