#include "main.h"

/**
*_strncat - concatonate two strings using n numbers
*@dest: string one
*@src: string two
*@n: number to concatonate
*Return: returns the concatonated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *keep = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		if (*src == '\0')
			break;
		i++;
	}

	*dest = '\0';
	return (keep);
}

