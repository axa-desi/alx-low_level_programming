#include "main.h"

/**
 * main - entry point
 *
 * Description: This function prints the alphabet 10 times, with each letter on a new line
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char f;
	int d = 0;

	while (d <= 9)
	{
		for (f = 'a'; f <= 'z'; f++)
		{
			_putchar(f);
		}

		_putchar('\n');

		d++;
	}
}
