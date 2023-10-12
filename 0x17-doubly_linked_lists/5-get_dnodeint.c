#include "lists.h"

/**
 * get_dnodeint_at_index - do Returns the
 * nth node of a dlistint_t linked list
 *
 * @head: TAKE A  Head of the List
 * @index: PUT THE index of the nth node
 * Return: nting to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
