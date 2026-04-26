#include "main.h"
/**
* _strncpy - copy a string
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int count_bytes;
	count_bytes = 0;

	while (count_bytes < n && src[count_bytes] != '\0')
	{
		dest[count_bytes] = src[count_bytes];
		count_bytes++;
	}

	while (count_bytes < n)
	{
		dest[count_bytes] = '\0';
		count_bytes++;
	}

	return (dest);
}
