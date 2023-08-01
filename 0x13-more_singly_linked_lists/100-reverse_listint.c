#include "lists.h"

/**
 * reverse_listint - will  reverses  linked list
 * @head:this will  pointer to the first node in the list
 *
 * Return:then after pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
