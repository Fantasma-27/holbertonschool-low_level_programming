#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to go through
 * @accept: accepted criteria
 *
 * Return: count of characters present in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	int count = 0;
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
			count++;

		else
			return (count);

		i++;
	}

	return (count);
}
