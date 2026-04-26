#include "main.h"
/**
 * _strlen - returns the length of a string as int
 * @s: string being checked
 * Return: length of strng
 */
int _strlen(char *s)
{
int strnglng = 0;
while (s[strnglng])

strnglng++;
return (strnglng);

}
