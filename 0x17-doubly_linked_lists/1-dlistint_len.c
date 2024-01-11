#include "lists.h"

/**
 * dlistint_len - doubly linked list
 * @h: pointer at the head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
