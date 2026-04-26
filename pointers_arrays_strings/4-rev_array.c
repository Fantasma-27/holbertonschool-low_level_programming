#include "main.h"
/**
* reverse_array - reverse any array of integers
* @a: array
* @n: number of elements in array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
int i;
int temporary;
for (i = 0; i < n--; i++)
{
temporary = a[i];
a[i] = a[n];
a[n] = temporary;
}
}
