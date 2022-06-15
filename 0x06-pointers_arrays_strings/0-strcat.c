#include"main.h"

/**
*_strcat - concatonate two strings
*@dest: string one
*@src: string two
*Return: returns the concatonated string
*/

char *_strcat(char *dest, char *src)
{
	char *keep = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (keep);
}
