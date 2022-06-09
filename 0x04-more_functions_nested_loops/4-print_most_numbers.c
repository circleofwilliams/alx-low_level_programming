#include "main.h"

/**
*print_most_numbers - print numbers but not 2 and 4
*/

void print_most_numbers(void)
{
	int i;

	i = 48;

	for (i = 48; i <= 57; i++)
	{
		if ((i != 50) && (i != 52))
		{
			_putchar(i);
		}
	}
	_putchar(10);
}
