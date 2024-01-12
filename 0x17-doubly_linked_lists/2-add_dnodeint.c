#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: pointer at the head of the list
 * @n: data in the head node
 *
 * Return: address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;


	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)-> = new;
	return (new);
}
