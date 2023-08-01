#include "lists.h"

/**
 * sum_listint - must  calculates the sum of All the data insert in listint_t
 * @head:for the  first node in the linked list
 *
 * Return:will be  resulting the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
