#include "main.h"

/**
*_strdup - duplicate strings
*@str: string to be duplicated
*Return: pointer to the duplicate
*/

char *_strdup(char *str)
{
	char *p;
	int l;

	if (str == NULL)
		return (NULL);

	l = 0;

	while (*str != '\0')
	{
		l = l + 1;
		str++;
	}

	p = malloc(l * sizeof(char));

	if (p == NULL)
		return (NULL);

	while (*str != '\0')
	{
		*p = *str;
		p++;
		str++;
	}

	return (p);

}
