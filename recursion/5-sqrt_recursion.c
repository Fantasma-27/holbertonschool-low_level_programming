#include "main.h"

/**
 * _sqrt_helper - helper function for square root
 * @n: number to find sqrt of
 * @candidate: current candidate to test
 *
 * Return: natural square root or -1
 */
int _sqrt_helper(int n, int candidate)
{
	if (candidate * candidate == n)
		return (candidate);

	if (candidate * candidate > n)
		return (-1);

	return (_sqrt_helper(n, candidate + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
