#include "main.h"

/**
*more_numbers - prints 10* number
*/

void more_numbers(void)
{
	int i[30];
	int j;
	int k;

	i[30] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 15; k++)
		{
			_putchar(i[k]);
		}
		_putchar(10);
	}
	_putchar(10);
}
