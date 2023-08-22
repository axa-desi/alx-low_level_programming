#include <stdio.h>

/**
 * _put - write to print a string the new line to stdout
 * @str: the string to print
 * Return: always 0
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		putchar(str[index]);
	}
	putchar('\n');
}
