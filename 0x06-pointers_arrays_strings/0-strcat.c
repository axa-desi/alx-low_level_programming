#include "main.h"
#include <stdio.h>

/**
 * _strcast - funtion to concatenate two strings
 * @dest: input string
 * @src: an input strikng
 * Return: a resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
