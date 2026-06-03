#include "main.h"

/**
  * string_toupper - minus 32 to change to uppercase of lowercase value
  * @s: string to convert
  *
  * Return: uppercase string
  */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

		i++;
	}

	return (s);
}
