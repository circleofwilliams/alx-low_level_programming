#include "main.h"

/**
 * print_alphabet - prints the alphabets
 */
void print_alphabet(void)
{
	int i;
	int alp[27] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112};


	for (i = 0; i < 28; i++)
	{
		_putchar(alp[i]);

	}
	_putchar(10);
}
