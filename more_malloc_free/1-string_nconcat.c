#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * string_nconcat - concatenates two strings (n bytes of s2)
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: pointer to concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc((len1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';
	return (concat);
}
