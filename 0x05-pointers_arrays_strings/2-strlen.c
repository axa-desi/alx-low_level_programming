#include <stdio.h>

/**
 * _strlen - to return the lenght of a string
 * @s: the input string
 *
 * Return: lenth of string
 */
int _strlen(char *s)
{
	int bolt;

	for (bolt = 0; s[bolt] != '\0' ; bolt++);
	return (bolt);
}
