#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to modified string
 */
char *leet(char *s)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 10)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}
