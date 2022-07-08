#include "variadic_functions.h"

/**
*print_strings - prints strings
*@s: seperator
*@n: number of strings
*/

void print_strings(const char *s, const size_t n, ...)
{
	size_t i;
	char *str;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
			printf("(nill)");
		printf("%s", str);
		if (s == NULL)
			continue;
		if (i < n - 1)
			printf("%s", s);
	}

	printf("\n");
	va_end(arg);
}
