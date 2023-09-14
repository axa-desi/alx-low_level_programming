#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_number - prints number
 *@n: the number of integers passed to the funtion
 *@separator: the string to be printed btwn numbers
 *@...: a variable number of numbers to be printed
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int nana;

	va_start(nums, n);

	for (nana = 0; nana < n; nana++)
	{
		printf("%d", va_arg(nums, int));
	if (nana != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
