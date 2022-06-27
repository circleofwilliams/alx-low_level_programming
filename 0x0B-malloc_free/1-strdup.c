#include "main.h"

/**
*_strdup - duplicate strings
*@str: string to be duplicated
*Return: pointer to the duplicate
*/

char *_strdup(char *str)
{
	char *p;
	int n, l;

	if (str == NULL)
		return (NULL);

	l = 0;

	while (*str != '\0')
	{
		++l;
		str++;
	}
	
	n = l;

	p = malloc(n * sizeof(char));

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
