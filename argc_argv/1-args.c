#include <stdio.h>

/**
 * main - counts everything except the program name
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
