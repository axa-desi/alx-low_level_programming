#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a funtion that prints strings
 *@n: the number of strings to be passed to the function
 *@separator: the string to be printed btwn the strings
 *@...: a variable integer to be printed
 *Description: If separator is NULL, don’t print it
 *If one of the string is NULL, print (nil) instead
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int boss;

	va_start(strings, n);

	for (boss = 0; boss < n; boss++)
	{
		str = va_arg(strings, char*);

		if (str == NULL)
			printf("nill");
		else
			printf("%s", str);
		if (boss != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
