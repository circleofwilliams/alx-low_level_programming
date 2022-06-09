#include "main.h"

/**
* _isdigit - checks for digit 0-9
* Return: 1 if digit and 0 otherwise
* @c: variable to check
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
