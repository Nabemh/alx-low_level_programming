#include <stdlib.h>
include "lists.h"

/**
 * list_len - returns number of elements in a liknked list
 * @h: pointer list_t
 *
 * Return: elements in h
 */

size_t linst_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
