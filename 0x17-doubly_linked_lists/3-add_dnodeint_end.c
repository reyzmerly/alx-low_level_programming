#include "lists.h"

/**
 * add_dnodeint_end - ADDs A NWw node at the end
 * of a dlistint_t list
 *
 * @head:MAKE A Head of the lis
 * @n:PUT THE  value of the element
 * Return: MAKE The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
