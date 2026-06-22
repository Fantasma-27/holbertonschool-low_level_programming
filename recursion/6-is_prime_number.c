#include "main.h"

/**
 * is_prime_helper - helper function to check divisors
 * @n: number to check
 * @divisor: current divisor to test
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - determines if prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, 2));
}
