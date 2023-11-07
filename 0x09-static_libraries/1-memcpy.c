#include "main.h"
/**
 *_memcpy -  to copy memory area
 *@dest: where memory is stored
 *@src: where to copy values from
 *@n: number of bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int o = 0;
	int p = n;

	for (; o < p; o++)
	{
		dest[o] = src[o];
		n--;
	}
	return (dest);
}
