#include "main.h"

/**
 * clear_bit - clears bit to 0 at given index
 * @n: pointer to number
 * @index: bit index
 *
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
