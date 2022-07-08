#include "variadic_functions.h"

/**
*print_all - prints anything
*@format: list of all arguments
*/

void print_all(const char * const format, ...)
{
	int i;
	va_list arg;
	char *str;

	char sep[] = ", ";
	va_start(arg, format);

	if (format == NULL)
		exit(98);

	i = 0;

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				continue;
		}
		printf("%s", sep);
		i++;
	}

	printf("\n");
	va_end(arg);
}
