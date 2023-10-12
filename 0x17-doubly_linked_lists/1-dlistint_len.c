#include "lists.h"

/**
 * dlistint_len - ret  The number of elements in
 * a double linked list
 *
 * @h: Head of the list
 * Return: THe numberS of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
