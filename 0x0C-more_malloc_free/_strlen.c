#include "main.h"

/**
*_strlen - find length of string
*@str: the string
*Return: the lenght
*/

int _strlen(char *str)
{
	if (*str = '\0')
		return (0);
	return (1 + _strlen(str + 1));
}
