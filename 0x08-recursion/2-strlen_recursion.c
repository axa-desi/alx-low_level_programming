#include "main.h"

/**
  * _strlen_recursion - reutrn the lenth of string
  * @s: the str count
  *
  * Return: int value
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
