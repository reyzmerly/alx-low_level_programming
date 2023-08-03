#include "main.h"
/**
 * flip_bits - its role is to counts the number of bits to be changed
 ** to get from one number to another
 ************************
 * @n:for the  first number
 * @m: for the  second number
 *
 * Return:codes will be  number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
/**
 * flip_bits - its role is to counts the number of bits to be changed
 ** to get from one number to another
 ************************
 * @n:for the  first number
 * @m: for the  second number
 *
 * Return:codes will be  number of bits to change
 */
