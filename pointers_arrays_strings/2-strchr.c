#include "main.h"
/**
  * _strchr - function to search a string for a character
  * @s: pointer to the string we are searching
  * @c: the character we are looking for
  *
  * Return: pointer to the first occurence of c in s or NULL if not found
  **/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);

		i++;
	}

	if (c == '\0')
		return (&s[i]);

	return (NULL);
}
