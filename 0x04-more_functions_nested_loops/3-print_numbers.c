#include "main.h"

/**
*print_numbers - prints 0-9
*/

void print_numbers(void)
{
	int j;

	int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (j = 0; j < 10; j++)
	{
		_putchar(i[j]);
	}
	_putchar(10);
}
