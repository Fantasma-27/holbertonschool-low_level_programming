#include "main.h"

/**
  * print_rev - prints a string backwards
  * @s: the string
  * Return: void
  */

void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		s++;
	}
		s--;

		while (s >= start)
		{
			_putchar(*s);
			s--;
		}

	_putchar('\n');
}
