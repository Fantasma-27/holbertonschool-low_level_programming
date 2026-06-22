#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit_string - checks if string contains only digits
 * @str: string to check
 *
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);

		i++;
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_digit_string(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
