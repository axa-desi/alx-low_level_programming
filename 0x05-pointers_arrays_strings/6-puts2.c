#include "main.h"

/**
 * puts2 -  prints every other character of a string the newline.
 *
 * @s: This pointer point to a char or string
 *
 */

void puts2(char *str)
{
	int g;
	int h;

	while (str[h] != '\0')
	{
		h++;
	}

	for (g = 0; g < h; g += 2)
	{
		_putchar(str[g]);
	}
	_putchar('\n');
}
