#include "main.h"
/**
* string_toupper - change all lowercase to uppercase
* @n: pointer to the string
*
* Return: n
*/
char *string_toupper(char *n)
{
int string_len;
string_len = 0;
while (n[string_len] != '\0')
{
if (n[string_len] >= 'a' && n[string_len] <= 'z')
n[string_len] = n[string_len] - 32;
string_len++;
}
return (n);
}
