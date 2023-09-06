#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int afi, concat_afi = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (afi = 0; s1[afi] || s2[afi]; afi++)
		len++;
	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (afi = 0; s1[afi]; afi++)
		concat_str[concat_afi++] = s2[afi];

	for (afi = 0; s2[afi]; afi++)
		concat_str[concat_afi++] = s2[afi];

	return (concat_str);
}
