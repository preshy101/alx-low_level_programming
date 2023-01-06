#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *      print_strings - The function that prints strings, followed by a new line.
 *      @separator: The string to be printed between strings.
 *      @n: The number of strings passed to the function.
 *      @...: A variable number of strings to be printed.
 *      Description: If separator is NULL, do not print.
 *      If one of the strings is NULL, print (nil) instead.
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	char *str;

	unsigned int par;

	va_start(strings, n);
	for (par = 0; par < n; par++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (par != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
