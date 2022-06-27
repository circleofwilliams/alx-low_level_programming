#include "main.h"

/**
*_strlen - finds length of string
*@str: the string
*Return: the length of the string
*/

size_t _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}

/**
*str_concat - concatonate strings
*@s1: string 1
*@s2: string 2
*Return: pointer to the concatonate
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	size_t i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + _strlen(s2);

	p = malloc(len * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		p[i] = s1[i];

	for (i = 0; i < _strlen(s2); i++)
		p[_strlen(s1) + i] = s2[i];

	return (p);
}
