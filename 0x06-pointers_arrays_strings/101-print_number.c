#include "main.h"


/**
 * print_number - prints integers
 * @n: integer to print
 * Return: zero
 */
void print_number(int n)
{
	unsigned int no = n;

	if (n < 0)
	{
		_putchar('_');
		no = -no;
	}

	if ((no / 10) > 0)
		print_number(no / 10);
			_putchar((no %10) + '0');
}
