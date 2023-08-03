#include "main.h"
/**
 * get_endianness - will start check if a machine is little or big
 * Return: this must return 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int o = 1;
	char *c = (char *) &o;

	return (*c);
}
/**
 * get_endianness - will start check if a machine is little or big
 * Return: this must return 0 for big, 1 for little
 */
