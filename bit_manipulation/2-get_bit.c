#include "main.h"

/**
 * get_bit - gets the value of a bit at index
 * @n: number
 * @index: bit index
 *
 * Return: bit value (0 or 1) or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
