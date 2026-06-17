#include "main.h"

/**
 * _strpbrk - returns the pointer to string when accept is found
 * @s: string to go through
 * @accept: accepted criteria
 *
 * Return: rest of s if found or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	int found;

	while (s[i] != '\0')
	{
		j = 0;
		found = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				found = 1;

			j++;
		}

		if (found == 1)
			return (&s[i]);

		else
			i++;
	}

	return (NULL);
}
