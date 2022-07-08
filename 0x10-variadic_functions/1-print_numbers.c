#include "variadic_functions.h"

/**
*print_numbers - prints numbers
*@s: the string to be between
*@n: numbers of integers passed to the function
*/

void print_numbers(const char *s, const size_t n, ...)
{
	size_t i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (s == NULL)
			continue;
		else if (i < n - 1)
			printf("%s", s);
	}
	printf("\n");
	va_end(arg);
}
