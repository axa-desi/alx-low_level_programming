#include "main.h"
/**
 *_strlen - returns lenth of a string
 *@s: string
 *
 *Return: lenth
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

