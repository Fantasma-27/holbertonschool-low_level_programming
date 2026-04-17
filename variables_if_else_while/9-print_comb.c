#include <stdio.h>
/**
*main - Entry point
*Description: Print single digit numbers separated by comas
* Return: 0 (Success)
*/
int main(void)
{
int n = 48;
while (n <= 57)
{
putchar(n);
if (n == 57)
{
break;
}
putchar(44);
putchar(32);
n++;
}
putchar('\n');
return (0);
}
