#include "main.h"

/**
*print_line - prints line in a specified number
*@n: number of times line is printed
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
