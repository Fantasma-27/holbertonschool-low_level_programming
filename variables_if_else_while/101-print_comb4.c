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
int nextNum2;
for (; number <= 57; number++)
{
nextNum = number + 1;
for (; nextNum <= 57; nextNum++)
{
nextNum2 = nextNum + 1;
for (; nextNum2 <= 57; nextNum2++)
{
putchar(number);
putchar(nextNum);
putchar(nextNum2);
if (number == 55 && nextNum == 56 && nextNum2 == 57)
{
break;
}
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
