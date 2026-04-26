#include "main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int string_len;
	int j;
	string_len = 0;

	while (dest[string_len] != '\0')
	{
		string_len++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[string_len] = src[j];
		string_len++;
		j++;
	}

	dest[string_len] = '\0';
	return (dest);
}
