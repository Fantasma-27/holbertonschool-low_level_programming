#include "main.h"

/*
 * more_numbers - prints 1-14 10 times
 *
 * Return: void 
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			_putchar((y / 10) + 48);
			_putchar((y % 10) + 48);
		}

		_putchar('\n');
	}
}
