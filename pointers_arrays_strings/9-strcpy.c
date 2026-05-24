#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: copy to dest from src
 * @src: copy from to paste at dest
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';

	return (dest);
}
