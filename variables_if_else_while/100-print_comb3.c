#include <stdio.h>
/**
* main - Entry point
* Description: Prints all possible combinations of two digits using putchar()
* Return: 0 (Success)
*/
int main(void)
{
int number = 48;
int nextNum;
for (; number <= 57; number++)
{
nextNum = number + 1;
for (; nextNum <= 57; nextNum++)
{
putchar(number);
putchar(nextNum);
if (number == 56 && nextNum == 57)
{
break;
}
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
