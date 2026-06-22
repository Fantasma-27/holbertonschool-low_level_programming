#include "main.h"

/**
 * _pow_recursion - gives the value of x raised to y
 * @x: base number
 * @y: power number
 *
 * Return: void
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
