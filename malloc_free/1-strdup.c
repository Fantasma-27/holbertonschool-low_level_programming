#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if fails
 */
char *_strdup(char *str)
{
	char *dup;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}
