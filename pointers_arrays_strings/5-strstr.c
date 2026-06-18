#include "main.h"

/**
 * _strstr - locates a substring (needle) in a string (haystack)
 * @haystack: the string to search through
 * @needle: the substring to find
 *
 * Return: pointer to the start of needle in haystack, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);

		i++;
	}

	return (NULL);
}
