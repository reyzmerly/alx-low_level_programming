#include "main.h"
#include <unistd.h>
/**
 * _putchar - will  writes the character c to stdout
 * @c:will be the character to print
 *
 * Return: weather success 1.
 * On error, -1 will be  returned, and erro is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
