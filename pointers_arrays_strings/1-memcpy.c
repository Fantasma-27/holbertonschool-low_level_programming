#include "main.h"

/**
  * _memcpy - function that copies memory area from src to dest
  * @n: number of bytes to be copied
  * @src: pointer to the value being copied
  * @dest: where the value is being copied to
  *
  * Return: a pointer to dest
  **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
