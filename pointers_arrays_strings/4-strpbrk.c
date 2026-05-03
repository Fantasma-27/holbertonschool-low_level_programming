#include "main.h"
/**
* _strpbrk - searches string for anyset of bytes
* @s: string being searched
* @accept: bytes being searched for
* Return: set match - pointer to matched byte or no match -NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
