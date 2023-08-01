#include "lists.h"

/**
 *  add_nodeint - Adds a New node at the beginning of a linked list
 * @head:this  pointer to the first node in the list
 * @q: this will put data to insert in that new node
 *
 * Return: the return will pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int q)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = q;
	new->next = *head;
	*head = new;

	return (new);
}
