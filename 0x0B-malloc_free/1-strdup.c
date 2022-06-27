#include "main.h"

/**
*_strlen - finds length of string
*@str: the string
*@Return: the length of the string
*/

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}

/**
*_strdup - duplicate strings
*@str: string to be duplicated
*Return: pointer to the duplicate
*/

char *_strdup(char *str)
{
	char *p;
	int n, i;

	if (str == NULL)
		return (NULL);

	n = _strlen(str);

	p = malloc(n * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		p[i] = str[i];
	}
	return (p);

}
