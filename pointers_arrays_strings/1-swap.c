#include "main.h"
/**
 * swap_int - takes two int and swaps the values of pointers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
