#include "main.h"
/**
 *char *_strcpy - a functin that copies then string pointed to by src
 *@dest: destination to copy to
 *@src: sourc to copy from
 *Return: string
 */
char *_strcp(char *dest, char *src)
{
	int a = 0, s = 0, x =0;

	while(*(src +a) != '\0')
	{
		a++;
	}
	for (; x < a ; s++)
	{
		dest[s] = src[s];
	}
	dest[a] = '\0';
	return(dest);
}
