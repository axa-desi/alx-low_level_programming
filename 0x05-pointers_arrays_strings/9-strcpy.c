#include "main.h"

/**
 * _strcy - copy a string
 * @des: destination valuve
 * @src: source value
 * Return: point to destination
 */

char *_strcpy(char *dest, char *src)
	{
		int a;

		for (a = 0; src[a] != '\0'; a++)
		{
			dest[a] = src[a];
		}
		dest[a++] = '\0';
		return (dest);
	}
