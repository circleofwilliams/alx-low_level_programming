#include "main.h"

/**
*_strlen_recursion - measures length of a string
*@s: the string to mesasure
*Return: the length
*/

int _strlen_recursion(char *s)
{
	int len = 0;
	if (*s != '\0')
		{
			++len;
			_strlen_recursion(s + 1);
		}
	return (len);
}
