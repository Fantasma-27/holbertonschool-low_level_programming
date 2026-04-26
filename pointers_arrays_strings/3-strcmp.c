#include "main.h"
/**
* _strcmp - compare string values
* @s1: the first input value
* @s2: pointer to second input value
*
* Return: value less than or greater than 0 depending on comparison
*/
int _strcmp(char *s1, char *s2)
{
int counter;
counter = 0;
while (s1[counter] != '\0' && s2[counter] != '\0')
{
if (s1[counter] != s2[counter])
{
return (s1[counter] - s2[counter]);
}
counter++;
}
return (0);
}
