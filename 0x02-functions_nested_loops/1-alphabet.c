#include "main.h"

/**
 * main - print_alphbet
 * Desc: it print alphabet in lowercase
 * Return: Always zero.
 */
void print_aphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++);
	{
		_putchar(c);
	}
	_putchar ('\n');
}
