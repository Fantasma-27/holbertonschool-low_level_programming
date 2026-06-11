#include "main.h"

/**
  * _memset - function that fills memory with const byte
  * @n: number of bytes to be changed
  * @b: constant byte to replace
  * @s: pointer to byte
  * Return: memory area
  **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
