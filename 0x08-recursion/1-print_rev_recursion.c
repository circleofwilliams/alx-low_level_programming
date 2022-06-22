#include "main.h"

/**
*_print_rev_recursion - reverses a string
*@s: string to reverse
*/

void _print_rev_recursion(char *s)
{
	while(*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
