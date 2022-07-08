#include "variadic_functions.h"

/**
*sum_them_all - find the sum of all the arguments
*@n: amount of arguments
*Return: the sum
*/

int sum_them_all(const size_t n, ...)
{
	va_list arg;
	size_t i;

	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);

	return (sum);
}
