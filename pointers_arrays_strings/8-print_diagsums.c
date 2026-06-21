#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of diagonals of a square matrix
 * @a: pointer to 2D array (cast as 1D int pointer)
 * @size: size of the matrix (size x size)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
		i++;
	}

	printf("%d, %d\n", sum1, sum2);
}
