#include "lists.h"
/**
 * dlistint_len - prints lists length
 * @h: Pointer to the list
 * Return: counter
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while(h != NULL)
	{
		h = h->next;
		counter++;
	}
	return(counter);
}
