#include "lists.h"

/**
 * print_dlistint - doubly linked list
 * @dlistint_t: list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		i++;
	}

	return (i);
}
