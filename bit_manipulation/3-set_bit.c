#include "main.h"

/**
 * set_bit - sets bit to 1 at given index
 * @n: pointer to number
 * @index: bit index
 *
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
