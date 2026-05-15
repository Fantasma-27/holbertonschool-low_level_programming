#include "main.h"

/**
  *rev_string - reverses a string
  * @s: the string
  * Return: void
  */

void rev_string(char *s)
{
	char *start = s;
	char temp;

	while (*s != '\0')
	{
		s++;
	}
	s--;

	while (s >= start)
	{
		temp = *start;
		*start = *s;
		*s = temp;

		start++;
		s--;
	}

}
