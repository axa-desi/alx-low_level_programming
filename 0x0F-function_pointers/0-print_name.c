#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - print name using pinter to funtion
 *@name: string to add
 *@f: pointer to funtion
 *
 *Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
