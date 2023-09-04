#include "main.h"
/**
 *_strchr - Returns a pointer to occurence of c in s, null if not found
 *@s: strikng targed
 *@c: charater targeted
 *
 *Return: poiknter to fisst occurrence of c
 */
char *_strchr(char *s, char c)
{
	int o;

	for (o = 0; (s[o] != c) && (s[o] != '\0'); o++)
		;

	if (s[o] == c)
		return (s + o);
	else
		return (NULL);
}
