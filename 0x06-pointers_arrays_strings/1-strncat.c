#include"main.h"

/**
*_strncat - concatonate two strings using n numbers
*@dest: string one
*@src: string two
*@n: number to concatonate
*Return: returns the concatonated string
*/

char *_strcat(char *dest, char *src, int n)
{

	int i = 0;
	char *keep = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (keep);
}

