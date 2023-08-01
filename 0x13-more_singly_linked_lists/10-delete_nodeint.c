#include "lists.h"

/**
 * delete_nodeint_at_index - for this delete node in linked list at given index
 * @head: then pointer to the first element in the list
 * @index: in the index of the node to delete
 *
 * Return: 1 (Successed code), or -1 (Failled code)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int e = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (e < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		e++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

