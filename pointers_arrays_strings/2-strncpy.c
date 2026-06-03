#include "main.h"

/**
 * _strncpy - copies a string using at most n bytes
 * @dest: the destination string
 * @src: the source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
        int a = 0;

        while (src[a] != '\0' && a < n)
        {
                dest[a] = src[a];
                a++;
        }

		while (a < n)
		{
			dest[a] = '\0';
			a++;
		}

		return (dest);
}	
