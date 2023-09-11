#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0, s = 0, x = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; x < a ; s++)
	{
		dest[s] = src[s];
	}
	dest[a] = '\0';
	return (dest);
}
