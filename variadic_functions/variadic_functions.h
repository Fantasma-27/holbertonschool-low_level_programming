#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - operator struct for print_all
 * @c: character
 * @f: function pointer
 */
typedef struct op
{
	char c;
	void (*f)(va_list);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);


#endif
