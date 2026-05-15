#include "main.h"

/**
  * _strlen - poins to the address of the strint
  * @s: length of the string
  * Return: void
  */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
