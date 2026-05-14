#include "main.h"

/**
 * print_line - prints a horizontal line n times
 * @n: number of times _ will be printed
 * Return: newline
 */

void print_line(int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
