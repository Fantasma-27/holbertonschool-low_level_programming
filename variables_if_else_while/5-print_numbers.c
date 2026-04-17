#include <stdio.h>
/**
*main - Entry point
*Description: Prints base 10 numbers (0-9)
*Return: 0 (Success)
*/
int main(void)
{
int n = 0;
while (n < 10)
{
printf("%d", n++);
}
printf("\n");
return (0);
}
