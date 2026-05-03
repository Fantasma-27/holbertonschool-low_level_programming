#include "main.h"
/**
 * _strchr - Locates a char in a strng
 *@s: searched string
 *@c: char to be located
 *
 *Return: for c is no, pointer to 1st occurence, for c is yes, NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
