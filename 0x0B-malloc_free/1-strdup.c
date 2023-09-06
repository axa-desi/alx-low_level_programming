#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string given as a parameter.
 *@str:String to be copied
 *
 * Return: NULL in case of error, pointer to allocated
 * space
 *
 * FUNCTIONALITY
 *
 * 1. First, we check if the string is NULL.  If it is, we return NULL.
 * 2.  Next, we loop through the string to find the length of the string.
 * 3.  We allocate memory for the copy of the string.
 * 4.  We check if the memory was allocated.  If it wasn’t, we return NULL.
 * 5.  loop through the string again,copying the string into the new memory.
 * 6.  We add a null terminator to the end of the string.
 * 7.  We return the copy of the string.
 *
 * Time Complexity: O(n)
 */
char *_strdup(char *str)
{
	char *cpy;
	int babs, len;

	if (str == NULL)
	return (NULL);

	for (babs = 0; str[babs]; babs++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	for (babs = 0; str[babs]; babs++)
	{
		cpy[babs] = str[babs];
	}
	cpy[len] = '\0';
	return (cpy);
}
