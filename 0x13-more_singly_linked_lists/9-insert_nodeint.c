#include "lists.h"

/**
 * insert_nodeint_at_index - must inserts new node in a linked list,
 * At A given position
 * @head:this will  pointer to the first node in the list
 * @idx: at  index where the new node is added
 * @n:the  data to be insert in the new node
 *
 * Return:the  pointer to the new node, or NULL the code
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
