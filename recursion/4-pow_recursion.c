#include "main.h"
/**
 * _pow_recursion - name of the function
 * @x: parameter 1 to check
 * @y: parameter 2 to check
 * Return: value of number passed to the function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else
		if (y == 0)
			return (1);

		else
			return (x * _pow_recursion(x, (y - 1)));

	return (0);
}
