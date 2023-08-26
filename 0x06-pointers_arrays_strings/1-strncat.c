#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *tap = dest, *start = src;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > len)
		n = len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (tap);
}
