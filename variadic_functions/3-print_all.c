#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char
 * @args: va_list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	(void)((str && printf("%s", str)) || printf("(nil)"));
}

/**
 * print_all - prints anything
 * @format: format string
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i, j, first;
	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	i = 0;
	first = 1;
	while (format[i])
	{
		j = 0;
		while (ops[j].c != '\0')
		{
			if (format[i] == ops[j].c)
			{
				if (first == 0)
					printf(", ");
				ops[j].f(args);
				first = 0;
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
