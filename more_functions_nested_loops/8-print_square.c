#include "main.h"

/**
 * print_square - prints a quare of n size
 * @size: size of the square
 * Return: newline
 */

void print_square(int size)

{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
