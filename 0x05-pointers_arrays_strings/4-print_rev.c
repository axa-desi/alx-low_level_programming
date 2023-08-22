#include "main.h"
#include <stdio.h>

/**
 * print_rev - to print revers strings
 *
 * @s: the input string
 */
void print_rev(char *s)
{
	int afi;

	for (afi = 0; s[afi] != '\0'; afi++)
	for (afi = afi -1; s[afi] != '\0'; afi--)
	{_putchar(s[afi]);
	}
	_putchar('\n');
}
