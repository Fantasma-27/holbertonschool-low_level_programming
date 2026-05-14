#include "main.h"

/**
  * swap_int - poins to an parameter that has to be swapped
  * @a: value one
  * @b: value two
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
