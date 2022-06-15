#include"main.h"

/**
*_strcat - concatonate two strings
*@dest: string one
*@src: string two
*Return: returns the concatonated string
*/

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		if (*src == '\0')
			break;
		dest++;
		src++;
	}
	
	return (dest);
}
