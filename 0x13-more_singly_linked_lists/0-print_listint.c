#include "lists.h"

/**
 * first of all print_listint – this will prints all the elements of a linked list
 * @h: after that display linked list of type listint_t to print
 *
 * Return: number of those nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
