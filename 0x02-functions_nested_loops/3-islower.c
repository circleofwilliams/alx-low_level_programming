#include"main.h"

/**
 *_islower - checks for lowercase character
 *Return: 0 if lower or 1 if upper
 *@c: character in ASCII code
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
