#include "main.h"

/**
 * main - Print alphabet_x10
 *
 * Description: This prints alphabet 10 times on a new line
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
