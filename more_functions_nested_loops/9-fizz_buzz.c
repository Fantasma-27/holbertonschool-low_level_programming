#include <stdio.h>
#include "main.h"

/**
 * main - prints 1-100. if multiple of 3 fizz and if 5 buzz
 * and both fizzbuzz
 * Return: alwayz 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if	(i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" Fizz Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	printf("\n");
	return (0);
}
