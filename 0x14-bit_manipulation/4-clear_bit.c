#include "main.h"

/**
 ** clear_bit - will be  sets the value of a given bit to 0
*
 ** @n: as pointer to  number to be  change
 ** @index: is the index of the bit to clear
 **
 ** Return: display 1 for success, and  -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
/**
 ** clear_bit - will be  sets the value of a given bit to 0
*
 ** @n: as pointer to  number to be  change
 ** @index: is the index of the bit to clear
 **
 ** Return: display 1 for success, and  -1 for failure
 */
