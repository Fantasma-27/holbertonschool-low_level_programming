#include "main.h"

/**
 * print_diagonal - prints a diagonal line n times
 * @n: when \ will be printed
 * Return: newline
 */

void print_diagonal(int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
