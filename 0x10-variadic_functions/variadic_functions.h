#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct typ - struct operators
 *
 * @c: Char
 * @tp: The function associated
 */
typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;
#endif
