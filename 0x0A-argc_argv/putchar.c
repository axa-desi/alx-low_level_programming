#include <stdio.h>
#include "main.h"
/**
 *_putchar - writes the character to stadnard output
 *@c: ther character to print
 *
 *Return: o1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
