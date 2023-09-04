#include "main.h"
/**
 * _memcpy - the function that copies n byte
 * @dest: the place where n will be copied to
 * @src: area where bytes are copied
 * @n: number of bytes to copy
 * Return: a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v = 0;

	for (; v < n; v++)
		dest[v] = src[v];
	return (dest);
}
