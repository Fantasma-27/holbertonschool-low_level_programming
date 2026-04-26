#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
*
* Return: void
*/
char *_strcat(char *dest, char *src)
{
	int string_len;
	int j;

	string_len = 0;

	while (dest[string_len] != '\0')
	{
		string_len++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[string_len] = src[j];
		string_len++;
		j++;
	}

	dest[string_len] = '\0';
	return (dest);
}
