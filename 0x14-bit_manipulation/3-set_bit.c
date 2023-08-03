#include "main.h"
/**
 * *set_bit - those  sets a bit for a given index to 1
 * *@n: will act as pointer to the number to change
 * *@index:while  index of the bit to set to 1
 *
 ** Return: 1 for success pass, -1 for failure pass
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
/**
 * *set_bit - those  sets a bit for a given index to 1
 * *@n: will act as pointer to the number to change
 * *@index:while  index of the bit to set to 1
 *
 ** Return: 1 for success pass, -1 for failure pass
 */
