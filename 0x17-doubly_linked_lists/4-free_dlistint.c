#include "lists.h"

/**
 * free_dlistint - Frees AT \A dlistint_t list
 *
 * @head:  MAKE THEhead of the list
 * Return: MAKE no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
