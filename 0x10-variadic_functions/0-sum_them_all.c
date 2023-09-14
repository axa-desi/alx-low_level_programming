#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all -a funtion that sums all its parameters
 *@n: athe number of parameters passed to the funtion
 *@...: a variable number of parameters
 *
 *Return: if n == 0 - 0, else sum of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
